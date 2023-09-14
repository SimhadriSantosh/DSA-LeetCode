class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {

        unordered_map<int,int>mp;
        long long sum=0,max_sum=0;
        int l=0,r=0;
        while(r<nums.size()){
            while( r<nums.size() && r-l<k){
                mp[nums[r]]++;
                sum+=nums[r];
                r++;
            }
            if(r-l == k){
                if(mp.size()>=m){
                    max_sum = max(sum,max_sum);
                }
                
                sum-=nums[l];
                mp[nums[l]]--;
                if(mp[nums[l]] == 0){
                    mp.erase(mp.find(nums[l]));
                }
                l++;
            }
        }
        return max_sum;
    }
};