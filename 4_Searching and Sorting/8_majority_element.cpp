int majorityElement(int a[], int size)
{
    map<int,int>res;
    
    for(int i=0;i<size;i++)
    {
        res[a[i]]++;
        if(res[a[i]]>size/2)
        {
            return a[i];
        }
    }
    return -1;
