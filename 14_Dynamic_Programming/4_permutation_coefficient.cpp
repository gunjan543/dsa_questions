#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;

    int p=1;
    for(int i=0;i<k;i++)
    {
        p*=(n-i);
    }
    cout<<p;
}
