class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // while(k--){
        //     int temp = nums[nums.size()-1];
        //     nums.pop_back();
        //     nums.insert(nums.begin(),temp);
        // }
        
        k%=nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        
        reverse(nums.begin()+(nums.size()-k),nums.end());
        
        reverse(nums.begin(),nums.end());
    }
};