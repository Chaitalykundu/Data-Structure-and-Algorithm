# Array Operations

Common operations performed on arrays include:

* Traversal
* Insertion
* Deletion
* Searching
* Sorting

&nbsp;

&nbsp;

* **Traversal**: Visiting each element of an array once in a specific order (e.g., sequential, reverse).

    ```cpp
    int arr[] = { 1, 2, 3, 4, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);
    // Traversing over arr[]
    for (int i = 0; i < len; i++) 
    {
        cout << arr[i] << " ";
    }
    ```

* **Insertion**: Adding a new element to an array at a specific index.

    ```cpp
    void insertElement(int arr[], int n, int x, int pos)
    {
        // shift elements to the right which are on the right side of pos
        for (int i = n - 1; i >= pos; i--)
            arr[i + 1] = arr[i];
    
        arr[pos] = x;
    }
    ```

* **Deletion**: Removing an element from an array at a specific index.

    ```cpp
    int deleteElement(int arr[], int n, int key)
    {
        // Find position of element to be deleted
        int pos = findElement(arr, n, key);

        if (pos == -1) {
            cout << "Element not found";
            return n;
        }

        // Deleting element
        int i;
        for (i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];

        return n - 1;
    }
    ```

* **Searching**: Finding the index of an element in an array.

    ```cpp
    // Function to implement search operation
    int findElement(int arr[], int n, int key)
    {
        int i;
        for (i = 0; i < n; i++)
            if (arr[i] == key)
                return i;
    
        // If the key is not found
        return -1;
    }
    ```

&nbsp;

&nbsp;

#

# Complexity Analysis of Operations on Array

Time Complexity:

| Operation | Best Case | Average Case | Worst Case |
| --------- | --------- | ------------ | ---------- |
| Traversal | Ω(N)      | θ(N)         | O(N)       |
| Insertion | Ω(1)      | θ(N)         | O(N)       |
| Deletion  | Ω(1)      | θ(N)         | O(N)       |
| Searching | Ω(1)      | θ(N)         | O(N)       |

&nbsp;

&nbsp;

| Operation | Best Case | Average Case | Worst Case |
| --------- | --------- | ------------ | ---------- |
| Traversal | Ω(1)      | θ(1)         | O(1)       |
| Insertion | Ω(1)      | θ(N)         | O(N)       |
| Deletion  | Ω(1)      | θ(N)         | O(N)       |
| Searching | Ω(1)      | θ(1)         | O(1)       |
