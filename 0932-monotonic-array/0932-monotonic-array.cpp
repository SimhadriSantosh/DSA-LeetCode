class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>=nums[i])count++;
        }
        if(count==nums.size()-1)return 1;
        count = 0;
        for(int i=1;i<n;i++){
            if(nums[i-1]<=nums[i])count++;
        }
        if(count==nums.size()-1)return 1;
        return 0;
    }
};