- A HEAP is a special Tree-based data structure in which the tree is a **_complete binary tree_**.

* **A COMPLETE BINARY TREE** is a binary tree in which all the levels are completely filled except possibly the lowest one, which is filled from the left.

* In a complete binary tree, if there are n nodes, then height of the tree = log(n)

&nbsp;

# Types of Heap Data Structure

Generally, Heaps can be of **two** types:

- <u>**_Min-Heap_**</u>: In a Min-Heap the key present at the root node must be **_minimum_** among the keys present at all of it’s children.

<img alt="minheap" src="https://github.com/Chaitalykundu/Data-Structure-and-Algorithm/blob/master/Love-Babbar-cheatsheet/Array/3-Kth%20smallest%20element%20-%20GFG/assets/minheap.png" width="250px"></a>

- <u>**_Max-Heap_**</u>: In a Max-Heap the key present at the root node must be **_greatest_** among the keys present at all of it’s children.

<img alt="maxheap" src="https://github.com/Chaitalykundu/Data-Structure-and-Algorithm/blob/master/Love-Babbar-cheatsheet/Array/3-Kth%20smallest%20element%20-%20GFG/assets/maxheap.png" width="250px"></a>

&nbsp;

# Identification of heap

1. k element
2. smallest / largest

- k + smallest = maxheap
- k + largest = minheap

&nbsp;

# Operations of Heap Data Structure:

- <u>**_Heapify_**</u>: a process of creating a heap from an array.

- <u>**_Insertion_**</u>: process to insert an element in existing heap time complexity O(log N).

- <u>**_Deletion_**</u>: deleting the top element of the heap or the highest priority element, and then organizing the heap and returning the element with time complexity O(log N).

- <u>**_Peek_**</u>: to check or find the most prior element in the heap, (max or min element for max and min heap).

&nbsp;

## **Heapify** :

It is the process to rearrange the elements to maintain the property of heap data structure. It is done when a certain node creates an imbalance in the heap due to some operations on that node. It takes **_O(log N)_** to balance the tree.

- For max-heap, it balances in such a way that the maximum element is the root of that binary tree and
- For min-heap, it balances in such a way that the minimum element is the root of that binary tree.

&nbsp;

## **Insertion**:

If we insert a new element into the heap since we are adding a new element into the heap so it will distort the properties of the heap so we need to perform the heapify operation so that it maintains the property of the heap.

- This operation also takes O(logN) time.

* Example :

```
Assume initially heap(taking max-heap) is as follows

          8
         / \
        4   5
       / \
      1   2
```

Now if we insert 10 into the heap

```
        8
      /   \
     4     5
    / \   /
   1   2 10
```

After heapify operation final heap will be look like this

```
           10
         /    \
        4       8
       / \     /
      1   2  5

```

&nbsp;

## **Deletion**:

- If we delete the element from the heap it always deletes the root element of the tree and replaces it with the last element of the tree.

- Since we delete the root element from the heap it will distort the properties of the heap so we need to perform heapify operations so that it maintains the property of the heap.

- It takes O(logN) time.

* Example :

```
Assume initially heap(taking max-heap) is as follows
           15
          /  \
         5    7
       /  \
      2    3
```

Now if we delete 15 into the heap it will be replaced by leaf node of the tree for temporary.

```
           3
         /   \
        5     7
      /
     2
```

After heapify operation final heap will be look like this

```
           7
         /   \
        5     3
       /
      2
```

&nbsp;

## getMax (For max-heap) or getMin (For min-heap):

- It finds the maximum element or minimum element for max-heap and min-heap respectively and as we know minimum and maximum elements will always be the root node itself for min-heap and max-heap respectively.
- It takes O(1) time.

&nbsp;

## removeMin or removeMax:

- This operation returns and deletes the maximum element and minimum element from the max-heap and min-heap respectively. In short, it deletes the root element of the heap binary tree.

&nbsp;

# Find parent, left child and right child

Suppose we are given an array, arr[] representing the complete binary tree / heap. We have to find parent, left child and right child

- parent(i) = |i-1|/2

* left child = 2\*i +1
* right child = 2\*i + 2

&nbsp;

# Applications of Heap Data Structure:

- **_Priority Queues:_**

  - Priority queues can be efficiently implemented using Binary Heap because it supports insert(), delete() and extractmax(), decreaseKey() operations in O(log N) time.

- **_Binomial Heap and Fibonacci Heap:_**

  - Binomial Heap and Fibonacci Heap are variations of Binary Heap. These variations perform union also in O(log N) time which is an O(N) operation in Binary Heap.

- **_Order statistics:_**

  - The Heap data structure can be used to efficiently find the kth smallest (or largest) element in an array.

&nbsp;

# Advantages of Heaps:

- Fast access to maximum/minimum element (O(1))
- Efficient Insertion and Deletion operations (O(log n))
- Flexible size
- Can be efficiently implemented as an array
- Suitable for real-time applications

&nbsp;

# Disadvantages of Heaps:

- Not suitable for searching for an element other than maximum/minimum (O(n) in worst case)
- Extra memory overhead to maintain heap structure
- Slower than other data structures like arrays and linked lists for non-priority queue operations.
