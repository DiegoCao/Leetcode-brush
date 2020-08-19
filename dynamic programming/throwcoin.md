###  My solution

This first solution is wrong because I understand its 状态转移方程 wrongly

```c++
class Solution {
public:
    int waysToChange(int n) {
        vector<int>dp(n+26);
        dp[0]=1;
        for(int i=0;i<5;i++){
            dp[i]=1;
        }
        for(int i=5;i<10;i++){
            dp[i]=dp[i-1]+dp[i-5];
        }
        for(int i=10;i<25;i++){
            dp[i]=dp[i-1]+dp[i-5]+dp[i-10];
        }
        for(int i=25;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-5]+dp[i-10]+dp[i-25];
        }
        return dp[n];
    }
};
```

Improve:

