#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) { //K denote the deterministic number
        int count=0; 
        vector<int>p;
        const int zeronum=0;  // as the first element, for calculation
        p.push_back(zeronum);
        // preparation for the randsum, calculate the sum of a[0] to a[i] and store it in p[i]
        for(int i=0;i<A.size();i++){
            int tempsum=0;
            for(int j=0;j<=i;j++){
                tempsum+=A[j];
            
            }
            p.push_back(tempsum);
        }
        // counting:
        // p[0]  --- p[A.size()]
        // A[0] --- A[A.size()-1]
        for(int i=1;i<A.size();i++){ //here i denote the element
            for(int j=0;j<=A.size()-i;j++){
                if(((p[j+i]-p[j])%K)==0){
                    count++;
                }
            }
        }
        if((p[A.size()]%K)==0)count++;
        return count;
    }
};

// This cannot pass, since time exceed