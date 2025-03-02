# Reverse an Array In-Place

## Problem Statement

Write a program to reverse an array in-place (without using an extra array).

## Example

**Input:** `{1, 2, 3, 4, 5}`  
**Output:** `{5, 4, 3, 2, 1}`

## Approach

### Two-pointer technique

- Use two pointers: one at the beginning (`left`) and one at the end (`right`) of the array.
- Swap the elements at `left` and `right`.
- Move `left` forward and `right` backward.
- Repeat until `left` is greater than or equal to `right`.

### Steps

1. Initialize `left = 0` and `right = array.length - 1`.
2. While `left < right`:
   - Swap `array[left]` and `array[right]`.
   - Increment `left`.
   - Decrement `right`.
3. The array is now reversed in place.

### Time Complexity

- **O(n)**: Each element is swapped once, resulting in linear time complexity.

### Space Complexity

- **O(1)**: No extra space is used since the reversal happens within the same array.
