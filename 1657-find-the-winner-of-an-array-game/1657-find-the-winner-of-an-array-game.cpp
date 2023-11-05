class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        // Sol 1

        int count=0,n=arr.size(),ans=INT_MIN;
        // while(count<min(k,n)){
        //     if(arr[0]>arr[1]){
        //         count++;
        //         arr.push_back(arr[1]);
        //         arr.erase(arr.begin()+1);
        //     }
        //     else{
        //         count=1;
        //         arr.push_back(arr[0]);
        //         arr[0]=arr[1];
        //         arr.erase(arr.begin()+1);
        //     }
        // }

        k=min(k,n);
        for(int i=0;i<arr.size();i++){
            int c=i+1;
            // count=0;
            // while(c>=0 && arr[c]<arr[i]){
            //     count++;
            //     c--;
            // }c=i+1;
            while(c<n && arr[c]<arr[i]){
                count++;
                c++;
            }
            if(i>0 && arr[i-1]<arr[i])count++;
            if(count>=k)return arr[i];
            else{
                count=0;
            }
            ans=max(ans,arr[i]);
        }
        return ans;
    }
};