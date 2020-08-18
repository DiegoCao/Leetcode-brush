#include <iostream>
class Solution {
public:
    int minDays(int n) {
        int *dp=new int[n+1];
        int days=0;
        for(int i=0;i<n+1;i++){
            if(i==0)dp[i]=0;
            else if(i==1)dp[i]=1;
            else if(i==2)dp[i]=2;
            else if(i==3)dp[i]=2;
        
            else{
                if(i%2==0&&i%3==0){
                    if(dp[i/2]<=dp[i/3]&&dp[i/2]<=dp[i-1]){
                        dp[i]=dp[i/2]+1;
                    }
                    else if(dp[i/3]<=dp[i/2]&&dp[i/3]<=dp[i-1]){
                        dp[i]=dp[i/3]+1;
                    }
                    else{
                        dp[i]=dp[i/2]+1;
                    }
                }
                else if(i%2!=0&&i%3==0){
                    if(dp[i/3]<=dp[i-1]){
                        dp[i]=dp[i/3]+1;
                    }
                    else{
                        dp[i]=dp[i-1]+1;
                    }
                }
                else if(i%2==0&&i%3!=0){
                    if(dp[i/2]<=dp[i-1]){
                        dp[i]=dp[i/2]+1;
                    }
                    else{
                        dp[i]=dp[i-1]+1;
                    }
                }
                else{
                    dp[i]=dp[i-1]+1;
                }
            }
        }
        int num=dp[n];
        return num;
    }

};

int main(){
    Solution a;
    std::cout<<a.minDays(84806671);
}