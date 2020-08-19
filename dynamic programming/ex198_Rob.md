# ex198_Rob

It should be a very stupid exercise, why I am stupid?

状态转移方程为：

dp[i]=max(dp[i-1],dp[i-2]+num);

```c++
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int size = nums.size();
        if (size == 1) {
            return nums[0];
        }
        int *dp = new int [size];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < size; i++) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[size - 1];
    }
};


```

或者为了节省空间可以用两个值+一个temp

```c++
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int size = nums.size();
        if (size == 1) {
            return nums[0];
        }
        int dp0=nums[0];
        int dp1=max(nums[0],nums[1]);
        int temp;
        for (int i = 2; i < size; i++) {
            temp=dp1;
            dp1=max(dp0+nums[i],dp1);
            dp0=temp;
        }
        return dp1;
    }
};


```

