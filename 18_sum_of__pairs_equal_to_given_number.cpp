 int getPairsCount(int arr[], int n, int k) {
        map<int,int>frequency;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            frequency[arr[i]]++; 
        }
        for(int i=0;i<n;i++){
           ans+=frequency[k-arr[i]];
           if(k-arr[i] == arr[i])
           ans--;
        }
        return ceil(ans/2);
    }
    