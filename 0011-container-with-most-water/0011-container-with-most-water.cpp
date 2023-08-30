class Solution {
public:
    int maxArea(vector<int>& height) {
        int final = 0,i=0,j=height.size()-1;
        while(i<j){
            if(height[j]<height[i]){
                final = max(final,height[j]*(j-i));
                j--;
            }
            else{
                final = max(final,height[i]*(j-i));
                i++;
            }
        }
        return final;
    }
};