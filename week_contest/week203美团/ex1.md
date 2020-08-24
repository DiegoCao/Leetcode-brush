My solution:

```c++
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> visit;
        vector<int> nums(n+1,0);
        for(int i=0;i<rounds.size()-1;i++){
            int k=rounds[i];
            int end=rounds[i+1];
            while(k!=end){
                nums[k]++;
                if(k>=n){
                    k=1;
                }
                else{
                    k++;
                }
            }
        }
        nums[rounds[rounds.size()-1]]++;
        auto max_p=max_element(nums.begin(),nums.end());
        int maxnum=*max_p;
        for(int i=1;i<=n;i++){
            if(nums[i]==maxnum){
                visit.push_back(i);
            }
        }
        
        return visit;
    }
};
```

