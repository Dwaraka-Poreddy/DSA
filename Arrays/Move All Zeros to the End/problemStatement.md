# Move Zeroes to End

## Problem Statement

Write a program to move all zeroes to the end of the array while keeping the order of non-zero elements.

### Example

**Input:** `{0, 1, 0, 3, 12}`  
**Output:** `{1, 3, 12, 0, 0}`

## Approach

### Two-pointer approach

- One pointer (`j`) keeps track of the position to place non-zero elements.
- Another pointer (`i`) loops through the array.
- If a non-zero element is found, swap it with the position at `j` and move `j` ahead.
