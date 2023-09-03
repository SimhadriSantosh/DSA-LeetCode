class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;++i){
            int temp=i;
            int dig = log10(temp) + 1;
            if(!(dig&1)){
                int sum1=0,sum2=0;
                for(int j=1;j<=dig;j++){
                    if(j<=dig/2)
                    sum1+=temp%10;
                    else
                    sum2+=temp%10;
                    temp/=10;
                }
                if(sum1==sum2)count++;
            }
        }
        return count;
    }
};