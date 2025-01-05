# Overview

- [Overview](#overview)
- [Dynamic Arrays](#dynamic-arrays)
- [Read/Write Operation Complexity](#readwrite-operation-complexity)
- [Use Case of Arrays](#use-case-of-arrays)

&nbsp;

&nbsp;

&nbsp;

# Dynamic Arrays

Dynamic arrays in programming allow flexible resizing of arrays during runtime.

Suppose there is insufficient space to accommodate the incoming element. In that case, a new array twice the size of the current array is created, the elements are copied into the new array, and then the new element is added.

Elements in a dynamic array are stored in contiguous memory locations.

Dynamic arrays provide efficient random access to elements using indices.

&nbsp;

&nbsp;

# Read/Write Operation Complexity

Accessing an element in a dynamic array takes constant time (O(1)), regardless of the array size.

Updating, inserting, or deleting elements in a dynamic array may require resizing, resulting in an average time complexity of O(n), where n is the number of elements in the array.

Dynamic arrays are more efficient as they accommodate incoming elements and won’t run out of bounds. It might seem a costly operation to double the array size and copy the elements into the new array (O(N)) just to accommodate the incoming element(O(1)). But on the contrary, it is actually very efficient, and we can understand the concept using amortized complexity.

&nbsp;

&nbsp;

# Use Case of Arrays

Arrays are fundamental data structures used in a wide range of programming problems. They provide a convenient way to store and manipulate collections of elements. Here are some common use cases and examples of how arrays are used in coding questions:

- **Frequency Count:**

  Counting the frequency of each element in an array is another common problem. By using additional data structures like hash maps or arrays of counters, you can track the occurrences of each element.

- **Two Sum Problem:**

  The Two Sum problem involves finding two numbers in an array that add up to a given target value. By using a hash map or sorting the array and employing two pointers, you can efficiently solve this problem.

- **Sliding Window Technique**:

  The sliding window technique utilizes arrays to solve problems where you must maintain a subset or fixed-size subset while moving through the main array.

- **Dynamic Programming:**

  Arrays are extensively used in dynamic programming to store and retrieve intermediate results for optimizing computations and solving complex problems.

&nbsp;

&nbsp;
