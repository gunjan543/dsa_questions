#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends

int reverseNumber(int n)
{      int reversedNumber = 0;
        while(n != 0) {
        int remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}
/*Complete the function below*/
int PalinArray(int a[], int n)
{  //add code here.

for(int i=0;i<n;i++)
{
   if(reverseNumber(a[i])!=a[i])
   return 0;
}
return 1;
   
}