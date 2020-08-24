这题就一道贪心，I am too stupid

还是要熟练使用sort等函数，根本不熟练

```c++
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans=0;
        for(int i=0;i<piles.size()/3;i++){
            ans+=piles[piles.size()-2*i-2];
        }
        return ans;
    }
};
```

