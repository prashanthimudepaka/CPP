/*
arr=[10,10,3,3,3,2,2,2,2,1]
10-2
3-3
2-4
1-1
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={10,10,3,3,3,2,2,2,2,1};
    unordered_map<int,int> mp;
    for(auto i:arr)
    {
        mp[i]++;
    }

    sort(arr.begin(),arr.end(),[&](int a,int b){
        return mp[a]>mp[b];//false second value prints
      
    });
    for(auto i:arr)
    {
        cout<<i;
    }

}