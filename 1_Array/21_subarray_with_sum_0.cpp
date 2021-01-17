#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
  vector<int>cum(n,0);
  map<int,int>frequency;
  cum[0]=arr[0];
  frequency[cum[0]]++;
  int flag=0;
  for(int i=1;i<n;i++)
  {
      cum[i]=arr[i]+cum[i-1];
      //cout<<cum[i]<<" ";
      frequency[cum[i]]++;
      if(cum[i] == 0 || frequency[cum[i]]>1)
      {
      flag=1;
  
      }
  }
  
  
  
 if(flag==1)
 return true;
 else
 return false;
  
  
}



