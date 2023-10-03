class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
        }
        for(auto it:s){
            count+=(it.second*(it.second-1))/2;
        }
        return count;
    }
};