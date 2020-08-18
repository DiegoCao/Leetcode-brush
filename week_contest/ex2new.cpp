#include <iostream>
#include <vector>
class Solution {
public:
    int helper(int days, int cur, int n){
        if(cur*3==n){
            return days+1;
        }
        else if(

        )
    }
    int minDays(int n) {
        int days=0;
        int cur=1;
        while(cur<n){
            days++;
            int num=cur
            if(cur*3<=n){
                cur=cur*3;
            }
            else if(cur*2<=n){
                cur=cur*2;

            }
            else{
                cur++;
            }
            if(cur==n){
                break;
            }
        }
        return days;

    }

};