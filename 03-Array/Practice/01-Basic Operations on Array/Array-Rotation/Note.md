# Array Rotation

Rotations in the array is defined as the process of rearranging the elements in an array by shifting each element to a new position.

This is mostly done by rotating the elements of the array clockwise or counterclockwise.

&nbsp;

&nbsp;

# Types of Rotations in Array

1. Right Rotation
2. Left Rotation

&nbsp;

## Right Rotation

Original => 1,2,3,4,5

Two element Right Rotation => 4,5,1,2,3

&nbsp;

## Left Rotation

Original => 1,2,3,4,5

Two element Left Rotation => 3,4,5,1,2

&nbsp;

&nbsp;

# How to implement rotations in an Array?

1. Rotate one by one
2. Using temporary Array
3. Juggling Algorithm
4. The Reversal Algorithm

&nbsp;

&nbsp;

# Approach : Rotate one by one

Rotate the array to left by one position. For that do the following:

* Store the first element of the array in a temporary variable.

* Shift the rest of the elements in the original array by one place.

* Update the last index of the array with the temporary variable.
