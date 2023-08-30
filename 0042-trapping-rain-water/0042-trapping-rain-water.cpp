class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0,n=height.size(),maxh = height[0],count=0,idxh=0;
        for(int i=1;i<n;i++){
            if(height[i]<maxh){
                count+=maxh-height[i];
            }
            else{
                maxh = height[i];
                idxh=i;
            } 
        }
        int maxh2 = height[n-1];
        for(int i=n-1;i>idxh;i--){
            if(height[i]>maxh2)
            maxh2=height[i];
            count-=maxh-maxh2;
        }
        return count;
    }
};