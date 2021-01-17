#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {3, 9, 12, 16, 20};
    int k = 3, n = 5;
    vector<pair<int,int>>cnt;
    vector<int>taken(n);
    //1)make all possible combinations and push in vector
    // {6,0}{3,1}{12,1},{9,2},{15,2},{13,3},{19,3},{17,4},{23,4}
    for(int i=0;i<n;i++)
    {
        if(arr[i]-k>0)
        cnt.push_back({arr[i]-k,i});
        cnt.push_back({arr[i]+k,i});
    }
   //2)sort
  // {3,1}{6,0} {9,2}{12,1}{13,3}{15,2}{17,4}{19,3}{23,4}
    sort(cnt.begin(),cnt.end());
    int elements_in_range=0;
    int right=0;
    int left=0;
  
   //3)making a window which will contain all the numbers atleast once
    // {1,2,2,1,1}
    //right=7
    while(elements_in_range<n && right<cnt.size()){
       if(taken[cnt[right].second] == 0)
       elements_in_range++;
       taken[cnt[right].second]++;
       right++;
    }
  //4)computing temp ans = 14
  int ans = cnt[right-1].first - cnt[left].first;
 // {0,2,2,2,2}
 // elements_in_range=4
  // {3,1}{6,0} {9,2}{12,1}{13,3}{15,2}{17,4}{19,3}{23,4}
  //5)checking if another possible window exists
  while(right<cnt.size()){
      if(taken[cnt[left].second] == 1)
      elements_in_range--;
      taken[cnt[left].second]--;
      left++;
      while(elements_in_range<n && right<cnt.size()){
          if(taken[cnt[right].second]==0)
           elements_in_range++;
           taken[cnt[right].second]++;
           right++;
      }
      if(elements_in_range==n)
      {
          ans=min(ans,cnt[right-1].first-cnt[left].first);
      }
      else{
          break;
      }
  }
  cout<<ans;
}
