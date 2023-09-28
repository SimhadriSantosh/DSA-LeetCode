class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int>even;
        vector<int>odd;
        for(auto it:nums){
            if(!(it&1))odd.push_back(it);
            
        }
        for(auto it:nums){
            if(it&1)odd.push_back(it);
            
        }
        

        return odd;
    }
};