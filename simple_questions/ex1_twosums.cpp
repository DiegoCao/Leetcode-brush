#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

// First Method with O(n^2)..
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        for (int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){  //mistake previously, using i instead of i+1 as iterator
                if(nums[i]+nums[j]==target){
                    result.push_back(nums[i]);
                    result.push_back(nums[j]);
                }

            }
        }
    }
};

//Result: 888ms, 7.72% Time, too bad
//updated: Hash map:

