#include <iostream>
using namespace std;
int main() {
    int i=0,j=0,k=0;
    int last=INT_MIN;
    vector<int>res;
    while(i<n1 && j<n2 && k<n3)
    {
        if(a[i] == b[j] && b[j]==c[k] && a[i]!=last){
            res.push_back(a[i]);
            last=a[i];
            i++;j++;k++;
        }
        else if(min({a[i],b[j],c[k]}) == a[i]) i++;
        else if(min({a[i],b[j],c[k]}) == b[j]) j++;
        else k++;
    }
    return res;
}
