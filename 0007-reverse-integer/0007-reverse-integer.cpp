class Solution {
public:
    int reverse(int x) {
        if(x==0)
        return 0;
        int sum=0,ld;
        bool sgn=0;
        if(x<0)
        sgn=1;
        x=abs(x);
        while(x>0){
            if(sum>214748364 || -(sum)<-214748364)
        return 0;
            ld=x%10;
            x/=10;
            sum = sum*10+ld;
        }
        if(sum>2147483647 || -(sum)<-2147483648)
        return 0;
        
        if(sgn)
        return 0-sum;
        else
        return sum; 
    }
};