/*
8. **Sort an Array of 0s, 1s, and 2s**: Given an array 
consisting of only `0`s, `1`s, and `2`s, write a program to in-place sort the array 
without using inbuilt sort functions. (Expected: Single pass `O(N)` and constant space).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     multiset<int>s={0,1,0,1,2,0,2};
     int z=s.count(0);//3
     s.emplace()
     int o=s.count(1);//2
     int t=s.count(2);//1
     int ind=0;
    vector<int> vec(s.begin(), s.end());
     for(int i=0;i<6;i++)
     {  if(ind<z)
        {
        vec[ind]=0;
        ind++;
        }
        if(ind<z+o && ind>z)
        {
            vec[ind]=1;
            ind++;
        }
        if(ind<z+o+t && ind>z+o)
        {
            vec[ind]=2;
            ind++;
        }
    }
for(auto i: vec)
{
    cout<<i;
}
  return 0;
     }
  
