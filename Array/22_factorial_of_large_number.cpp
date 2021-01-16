#include<bits/stdc++.h>
using namespace std;

long long int multiply(long long int x,vector <long long int> &res,long long int res_size)
{
    long long int carry = 0;
    
    for(int i=0;i<res_size;i++)
    {
        long long int prod = x*res[i] + carry;
        
        res[i] = prod%10;
        
        carry = prod/10;
    }
    
    while(carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    
    return res_size;
}
int main()
{
    long long int t,n;
    cin >>t;
    while(t--)
    {
        cin >>n;
        vector <long long int> res(10000);
        res[0]=1;
        long long int res_size = 1;
        
        for(int i=2;i<=n;i++)
        {
            res_size = multiply(i,res,res_size);
        }
        
        for(int i=res_size-1;i>=0;i--)
        {
            cout<<res[i];
        }
        cout<<endl;
        res.clear();
    }
}