
class Solution {
public:
    int c_stebits(int n){
        int i = 1;
        int c=0;
        while(n>0){
            if(n&i)c++;
            n>>=1;
        }
        return c;
    }
    
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        
        int sum = 0,c;
        for(int i=0;i<nums.size();i++){
            c = c_stebits(i);
            if(c==k)sum+=nums[i];
        }
        return sum;
    }
};