# Problem: <268. Missing Number>

## Description: 
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

## Link:
https://leetcode.com/problems/missing-number/description/

## Approach: 
1. Sort the input array.
2. Check if 0 is missing. If so, return 0.
3. Check if the last number is missing. If so, return the size of the array.
4. Iterate through the sorted array. If there is a gap between consecutive numbers, return the missing number.

## Complexity:
Time complexity: O(n log n)
Space complexity: O(1)