# Is the array always of a fixed size?

The array has a fixed size meaning once the size is given to it, it cannot be changed i.e. you can’t shrink it nor can you expand it. The reason was that for expanding if we change the size we can’t be sure ( it’s not possible every time) that we get the next memory location to us for free. The shrinking will not work because the array, when declared, gets memory statically allocated, and thus compiler is the only one that can destroy it.

&nbsp;

&nbsp;

# Why do we use array

We can use normal variable when we have small number of objects. But if we want to store large number of objects, it becomes difficult to manage them with normal variables. The idea of an array is to represent many objects in one variable.

&nbsp;

&nbsp;

# What is the difference btw Array & Pointer

&nbsp;

&nbsp;

# What is the difference btw Array & Linked List


&nbsp;

&nbsp;

# What if no of elements are lesser than the length specified? Ex: a[10] = {1,2,3,4,5,6}

The rest locations are filled by 0.

Ex : a[10] = {1,2,3,4,5,6,0,0,0,0}

&nbsp;

&nbsp;

# What is Designated Initialization?

If we want to add elements in such way that most of the elements will be 0 ex : a[10] = {1,1,0,0,0,4,0,2,0,2}, then we can add like this

int a[10] = {[0,1]=1, [5]=4,[7,9]=2}

This way of initialization is called Designated Initialization.

Each number in the square brackets is known as Designator.

&nbsp;

&nbsp;

# What is the advantage of the Designated Initialization?

1. No need to bother about the no of zeros

2. No need to bother about the order at all.

&nbsp;

&nbsp;
&nbsp;

&nbsp;
&nbsp;

&nbsp;
&nbsp;

&nbsp;
&nbsp;

&nbsp;
&nbsp;

&nbsp;
&nbsp;

&nbsp;
&nbsp;

&nbsp;
&nbsp;

&nbsp;
