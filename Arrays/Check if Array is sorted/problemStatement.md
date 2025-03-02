# Check if an Array is Sorted (Non-Decreasing Order)

## Problem Statement

Write a program to check if an array is sorted in non-decreasing order (ascending order).

## Example

**Input:** `{1, 2, 3, 4, 5}`  
**Output:** `YES (Sorted)`

**Input:** `{1, 3, 2, 4, 5}`  
**Output:** `NO (Not Sorted)`

## Approach

### Iterative Check

1. Traverse the array from the first element to the second-last element.
2. Compare each element with the next one.
3. If any element is greater than the next element, return `NO (Not Sorted)`.
4. If the loop completes without finding an out-of-order element, return `YES (Sorted)`.

### Steps

1. Start a loop from `i = 0` to `i < array.length - 1`.
2. If `array[i] > array[i+1]`, return `NO (Not Sorted)`.
3. If the loop completes, return `YES (Sorted)`.

### Time Complexity

- **O(n)**: The array is traversed once, making it linear in time.

### Space Complexity

- **O(1)**: No extra space is used apart from a few variables.
