

 // } Driver Code Ends


// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for 

bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    int sum=0,rem,*p;
    for(int i=0;i<N;i++)
    {   sum+=arr[i];
        for(int j=i+1;j<N;j++)
        {
            sum+=arr[j];
            rem=X-sum;
             
            p = find (arr+j+1, arr+N, rem);
            if (p != arr+N)
            {
                return true;
            }
            sum-=arr[j];
            
        }
        sum-=arr[i];
    }
    return false;
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends