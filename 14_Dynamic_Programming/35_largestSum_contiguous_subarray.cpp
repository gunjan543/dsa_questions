using namespace std;

int max_sum(int a[], int size) 
{ 
   int max_so_far = a[0]; 
   int curr_max = a[0]; 
  
   for (int i = 1; i < size; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far; 
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<max_sum(a,n)<<endl;
	}
	return 0;
}