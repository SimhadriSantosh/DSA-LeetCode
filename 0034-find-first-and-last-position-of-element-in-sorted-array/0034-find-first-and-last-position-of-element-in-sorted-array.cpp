class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n = arr.size();
        int l=0,r=n-1;
        bool flag=0;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(arr[mid]>x)r=mid-1;
            else if(arr[mid]<x)l=mid+1;
            else{
                flag=1;
                l=mid+1;
                while(l<n && arr[l]==x){
                    l++;
                }
                r = mid-1;
                while(r>=0 && arr[r]==x)r--;
            }
        }
        if(flag)return {r+1,l-1};
        return {-1,-1};
    }
};