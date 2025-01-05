# Overview

- [Overview](#overview)
- [Designated Initialization?](#designated-initialization)
- [Advantage of the Designated Initialization?](#advantage-of-the-designated-initialization)

&nbsp;

&nbsp;

&nbsp;

# Designated Initialization?

If we want to add elements in such way that most of the elements will be 0 ex : a[10] = {1,1,0,0,0,4,0,2,0,2}, then we can add like this

int a[10] = {[0,1]=1, [5]=4,[7,9]=2}

This way of initialization is called Designated Initialization.

Each number in the square brackets is known as Designator.

&nbsp;

&nbsp;

# Advantage of the Designated Initialization?

1. No need to bother about the no of zeros

2. No need to bother about the order at all.
