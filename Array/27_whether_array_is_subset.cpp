#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2,n3=0;
	    cin>>n1>>n2;
	    map<int,int>res;
	    int a;
	    for(int i=0;i<n1;i++)
	    {
	        cin>>a;
	        res[a]++;
	    }
	    for(int i=0;i<n2;i++)
	    {
	        cin>>a;
	        res[a]++;
	        if(res[a]==2){
	            n3++;
	        }
	    }
	    if(n3==n2)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	
	return 0;
}