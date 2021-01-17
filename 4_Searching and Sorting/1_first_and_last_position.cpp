#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int start=-1,end=-1;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==x && cnt==0)
	        {
	        start=i;
	        cnt++;
	        }
	        if(a[i]==x)
	        end=i;
	    }
	    if(start==-1)
	    cout<<"-1";
	    else
	    cout<<start<<" "<<end;
        cout<<endl;
	}
	return 0;
}