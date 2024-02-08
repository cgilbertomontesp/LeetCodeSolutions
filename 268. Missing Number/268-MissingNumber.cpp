/*
   268. Missing Number
   
    Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

    Example:
        Input: [3,0,1]
        Output: 2

*/

#include <iostream>
#include <vector>

using namespace std;

class MissingNumberSolution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort nums vector
        int numsSize = nums.size(); // Number of elements in vector

        // Missing 0 case
        if (nums[0] != 0){
            return 0;
        }

        //Missing last number case
        if (nums[numsSize-1] != numsSize){
            return numsSize;
        }

        //Search for missing number between 0 and n
        for (int i = 1; i < numsSize; i++){
            if (nums[i] != nums[i-1] + 1){
                return nums[i-1] + 1;
            }
        }

        //No number missing
        return -1;
    }
};

/*

Constraints:
    n == nums.length
    1 <= n <= 104
    0 <= nums[i] <= n
    All the numbers of nums are unique.

*/