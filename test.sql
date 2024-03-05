-- 1. Insert with Subquery and Join
INSERT INTO customer_details (customer_ID, customer_name, phoneno, address, purchase_amount)
SELECT 1001, 'John Doe', 1234567890, '123 Main St', SUM(total_amount)
FROM purchaseorder_master
GROUP BY customer_ID
HAVING COUNT(purchaseorder_ID) > 5;

-- 2. Update with Subquery and Correlated Subquery
UPDATE purchaseorder_master
SET total_amount = total_amount * 1.1
WHERE customer_ID IN (
    SELECT customer_ID
    FROM customer_details
    WHERE purchase_amount > (
        SELECT AVG(purchase_amount)
        FROM customer_details
    )
);

-- 3. Delete with Multiple Joins and Aggregation
DELETE FROM purchaseorder_master
WHERE purchaseorder_ID IN (
    SELECT pm.purchaseorder_ID
    FROM purchaseorder_master pm
    JOIN purchaseorder_details pd ON pm.purchaseorder_ID = pd.purchaseorder_master_ID
    JOIN inventory_details id ON pd.product_ID = id.product_ID
    WHERE id.quantity < 10
    GROUP BY pm.purchaseorder_ID
    HAVING SUM(pd.quantity_ordered) < 50
);

-- 4. Insert with Values from Subquery and Case Statement
INSERT INTO shipping (purchaseorder_ID, customer_ID, customer_address, order_date, shipping_date, shipping_cost)
SELECT pm.purchaseorder_ID, pm.customer_ID, cd.address, pm.order_date, CURRENT_DATE(),
    CASE
        WHEN shipping_cost < 10 THEN shipping_cost * 1.5
        ELSE shipping_cost
    END
FROM purchaseorder_master pm
JOIN customer_details cd ON pm.customer_ID = cd.customer_ID
WHERE pm.status = 'SHIPPED';

-- 5. Update with Scalar Function and Join
UPDATE inventory_details
SET cost = fn_update_cost(cost)
WHERE product_ID IN (
    SELECT product_ID
    FROM supply_orders
    WHERE status = 'PENDING'
);

-- 6. Delete with Subquery Filtering and Window Function
DELETE FROM customer_details
WHERE customer_ID IN (
    SELECT customer_ID
    FROM (
        SELECT customer_ID, ROW_NUMBER() OVER (ORDER BY purchase_amount DESC) AS row_num
        FROM customer_details
    ) AS temp
    WHERE row_num > 10
);

-- 7. Insert with Values from Common Table Expression (CTE) and Join
WITH high_value_customers AS (
    SELECT customer_ID
    FROM customer_details
    WHERE purchase_amount > 1000
)
INSERT INTO shipping (purchaseorder_ID, customer_ID, customer_address, order_date, shipping_date, shipping_cost)
SELECT pm.purchaseorder_ID, hvc.customer_ID, cd.address, pm.order_date, CURRENT_DATE(), 20
FROM purchaseorder_master pm
JOIN high_value_customers hvc ON pm.customer_ID = hvc.customer_ID
JOIN customer_details cd ON pm.customer_ID = cd.customer_ID
WHERE pm.status = 'SHIPPED';

-- 8. Update with Case Statement and Subquery
UPDATE product_details
SET quantity_available = CASE
                            WHEN quantity_available < 20 THEN quantity_available + 5
                            ELSE quantity_available
                         END
WHERE product_ID IN (
    SELECT product_ID
    FROM inventory_details
    WHERE location = 'Warehouse A'
);

-- 9. Delete with Join and Subquery Using Common Table Expression (CTE)
WITH low_stock_products AS (
    SELECT product_ID
    FROM product_details
    WHERE quantity_available < 10
)
DELETE FROM inventory_details
WHERE product_ID IN (SELECT product_ID FROM low_stock_products);

-- 10. Insert with Values from Join and Subquery
INSERT INTO purchaseorder_details (purchaseorder_master_ID, product_ID, quantity_ordered)
SELECT pm.purchaseorder_ID, pd.product_ID, 10
FROM purchaseorder_master pm
JOIN product_details pd ON pm.customer_ID = pd.product_ID
WHERE pm.status = 'UNSHIPPED'
AND pd.quantity_available > (
    SELECT AVG(quantity_ordered)
    FROM purchaseorder_details
    WHERE product_ID = pd.product_ID
);

-- 11. Update with Limit and Order By
UPDATE inventory_details
SET cost = cost * 1.1
WHERE product_ID IN (
    SELECT product_ID
    FROM inventory_details
    ORDER BY cost DESC
    LIMIT 5
);

-- 12. Delete with Subquery and Aggregation
DELETE FROM product_details
WHERE product_ID NOT IN (
    SELECT product_ID
    FROM purchaseorder_details
    GROUP BY product_ID
    HAVING SUM(quantity_ordered) > 100
);

-- 13. Insert with Case Statement and Subquery
INSERT INTO shipping (purchaseorder_ID, customer_ID, customer_address, order_date, shipping_date, shipping_cost)
SELECT purchaseorder_ID, customer_ID, address, order_date, shipping_date,
    CASE
        WHEN shipping_cost < 10 THEN shipping_cost * 2
        ELSE shipping_cost
    END
FROM purchaseorder_master pm
JOIN customer_details cd ON pm.customer_ID = cd.customer_ID
WHERE shipping_date IS NOT NULL;

-- 14. Update with Scalar Function and Subquery
UPDATE customer_details
SET purchase_amount = fn_update_purchase_amount(customer_ID, purchase_amount)
WHERE customer_ID IN (
    SELECT customer_ID
    FROM purchaseorder_master
    WHERE status = 'UNSHIPPED'
);

-- 15. Delete with Join and Subquery
DELETE FROM purchaseorder_details
WHERE purchaseorder_master_ID IN (
    SELECT purchaseorder_ID
    FROM purchaseorder_master
    WHERE order_date < CURRENT_DATE() - INTERVAL '30' DAY
);

-- 16. Insert with Values from Subquery
INSERT INTO supply_orders (store_ID, product_ID, quantity_required, status)
SELECT store_ID, product_ID, SUM(quantity_ordered), 'FULFILLED'
FROM purchaseorder_details
GROUP BY store_ID, product_ID
HAVING SUM(quantity_ordered) > 100;