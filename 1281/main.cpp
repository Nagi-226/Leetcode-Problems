class Solution 
{
public:
    int subtractProductAndSum(int n) 
    {
        int m=1,s=0;
        while(n>=1)
        {
            int x=n%10;
            n/=10;
            m*=x;
            s+=x;
        }
        return m-s;
    }
};