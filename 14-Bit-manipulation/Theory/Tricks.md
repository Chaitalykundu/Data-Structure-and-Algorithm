# Overview

- [Overview](#overview)
- [To check if ith bit of a number is set or not?](#to-check-if-ith-bit-of-a-number-is-set-or-not)
- [To check if a number is a power of 2?](#to-check-if-a-number-is-a-power-of-2)
- [Binary Representation of any number -](#binary-representation-of-any-number--)
- [Swapping two numbers](#swapping-two-numbers)
- [Multiply any number by ith power of 2](#multiply-any-number-by-ith-power-of-2)

&nbsp;

&nbsp;

&nbsp;

# To check if ith bit of a number is set or not?

We AND the number with ith power of 2. If the result is also the ith power of 2, then the bit is set (1) otherwise the bit is unset (0).

&nbsp;

&nbsp;

# To check if a number is a power of 2?

If a number is a power of 2, then only 1 bit will be set in the binary representation.

The following code will be true to check for power of 2.

&nbsp;

&nbsp;

# Binary Representation of any number -

We have to divide the number until it becomes zero by 2. The remainder will be either 0 or 1.

The remainder will decide the bit value.

&nbsp;

&nbsp;

# Swapping two numbers

Initially if we wanted to swap numbers, we had to take one temporary variable.

But we can still swap the two numbers by not using temporary variables.

&nbsp;

&nbsp;

# Multiply any number by ith power of 2

We just apply the left shift operation on the number i times to multiply it by ith power of two.

For Example - Consider the number 7. If we left shift it by 2.

7 << 2 = 11100 which is 7 \* (2 ^ 2) = 28.

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;
