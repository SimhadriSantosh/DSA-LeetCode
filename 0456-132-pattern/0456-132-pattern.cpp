class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>s;
        
        int third = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < third) return 1;
            while (!s.empty() && s.top() < nums[i]) {
                third = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        
        return 0;
        // for(int i=0;i<nums.size()-2;i++){
        //     int l=i+1;
        //     while(l<nums.size() && nums[l]<=nums[i]){
        //         l++;
        //     }
        //     int r = l+1;
        //     while(r<nums.size()){
        //         if(nums[l]>nums[r] && nums[i]<nums[r])return 1;
        //         else
        //         r++;
        //     }
        // }
        return 0;
    }
};