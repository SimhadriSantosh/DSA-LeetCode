class Solution {
public:
    int bin(vector<int>&nums,int target,int l,int r){
        cout<<l<<" "<<r<<endl;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]<target)l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid]>nums[r])
                l=mid+1;
            else{
                r=mid;
            }
        }
        // return l;
        return max(bin(nums,target,0,l-1),bin(nums,target,l,nums.size()-1));
    }
};