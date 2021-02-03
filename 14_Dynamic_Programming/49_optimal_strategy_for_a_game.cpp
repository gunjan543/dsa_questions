

 // } Driver Code Ends

int dp[100][100];
int ans=0;
long long helper(int arr[],int start,int end,int sum)
{
    if(dp[start][end]!=-1) return dp[start][end];
    
    if(end == start+1)
    return dp[start][end] = max(arr[start],arr[end]);
    
    int a = sum - helper(arr,start+1,end,sum-arr[start]);
    int b = sum - helper(arr,start,end-1,sum-arr[end]);
    
    return dp[start][end] = max(a,b); 
}

long long maximumAmount(int arr[], int n) 
{
    dp[n+1][n+1];
    memset(dp,-1,sizeof dp);
     int sum = 0;
    sum = accumulate(arr, arr + n, sum);
    return helper(arr,0,n-1,sum);
}

// { Driver Code Starts.

int main() {
    
    //taking total testcases
	int T;
	cin>>T;
	while(T--)
	{
	    //taking number of elements
	    int N;
	    cin>>N;
	    
	    int A[N];
	    
	    //inserting the elements
	    for(int i=0;i<N;i++)
	    cin>>A[i];
	    
	    //calling function maximumAmount()
	    cout<<maximumAmount(A,N)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends