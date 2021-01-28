#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
bool cmp(struct val p1,struct val p2)
{
	if(p1.first<p2.first)
	return 1;
	else if(p1.first==p2.first and p1.second<p2.second)
	return 1;
	return 0;
}
int ans(struct val p[],int n)
{
    int cnt=0;
    int dp[n+1];
        
    for(int i=0;i<n;i++)
        {
            dp[i]=1;
        }
        
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(p[i].first>p[j].second)
            dp[i]=max(dp[i],1+dp[j]);
        }
    }
    int max2=INT_MIN;
    for(int i=0;i<n;i++)
    {
     max2=max(max2,dp[i]);   
    }
    return max2;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
sort(p,p+n,cmp);
return ans(p,n);
}