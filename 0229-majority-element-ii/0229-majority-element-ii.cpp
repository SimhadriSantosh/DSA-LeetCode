class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // if(nums.size()<3)return nums;
        int ele1,ele2;
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(c1==0 && nums[i]!=ele2){
                c1 = 1;
                ele1=nums[i];
            }
            else if(c2==0 && nums[i]!=ele1){
                c2=1;
                ele2=nums[i];
            }
            else if(nums[i]==ele1)c1++;
            else if(nums[i]==ele2)c2++;
            else c1--,c2--;
        }
        c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1)c1++;
            else if(nums[i]==ele2)c2++;
        }
        vector<int>ans;
        if(c1>=floor(nums.size()/3.0)+1)ans.push_back(ele1);
        if(c2>=floor(nums.size()/3.0)+1)ans.push_back(ele2);
        return ans;
    }
};