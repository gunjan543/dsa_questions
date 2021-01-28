#include <iostream>
#include<climits>
using namespace std;

int tdp[100][100];
int matrixChain(int m[],int i,int j){
    //base case
    if(i==j){
    tdp[i][j]=0;
    return 0;
    } 
    //overlapping subproblem
    if(tdp[i][j]!=-1) return tdp[i][j];
    int ans=INT_MAX;

    for(int k=i;k<j;k++){
        int temp=matrixChain(m,i,k)+matrixChain(m,k+1,j)+m[i-1]*m[k]*m[j];
        ans=min(ans,temp);
    }
    return ans;


}
int main() {
    int matrices[]={1,2,3,4};
    int n=sizeof(matrices)/sizeof(int);
    memset(tdp,-1,sizeof(tdp));
    cout<<matrixChain(matrices,1,n-1);
    return 0;
}
