class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int start = 0,end = arr.size()-1,s=-1,e=-1,mid;
        bool flag= 0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid] < target){
                start = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else{
                s = mid;
                start = mid+1;
            }
        }
        start=0,end=arr.size()-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid] < target){
                start = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else{
                e = mid;
                end = mid-1;
            }
        }
        if(s!=-1)
        return {e,s};
        return {-1,-1};
    }
};