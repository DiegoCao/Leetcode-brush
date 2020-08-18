class Solution {
public:
    int helper(int days,int n){
        if(n==1){
            return days+1;
        }
        if(n<=0){
            return days;
        }
        if(n%2==0&&n%3==0){
            return min(min(helper(days+1,n/2),helper(days+1,n-2*(n/3))),helper(days+1,n-1));
        }
        else if(n%2!=0&&n%3!=0){
            return helper(days+1,n-1);
        }
        else if(n%2==0&&n%3!=0){
            return min(helper(days+1,n/2),helper(days+1,n-1));
        }
        else{
             return min(helper(days+1,n-2*(n/3)),helper(days+1,n-1));
        }
    }
    int minDays(int n) {
        int days=0;
        while(n>0){
            if(n%2!=0&&n%3!=0){
                n--;
                days++;
            }
            else if(n%3==0){
                n=n-2*(n/3);
                days++;
            }
            else if(n%2==0){
                n-=n/2;
                days++;
            }
        }
        return days;
    }

};