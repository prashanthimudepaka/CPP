/*Given an array of size n, write a program to check if the 
given array is sorted in (ascending / Increasing / Non-decreasing) 
order or not. 
If the array is sorted then return True, Else return False.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    { int value;
        cin>>value;
        v.emplace_back(value);
    }
    vector<int> ar(v.begin(),v.end());
for(int i=0;i<ar.size();i++)
{
    cout<<ar[i]<<" ";
}
    // sort(v.begin(),v.end());
    // if(v==ar)
    // {
    //         cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }
//1 5 5 3 10
    //int m=v[0];
    bool f=true;
   for(int i=0;i<n-1;i++)
   {
      if(ar[i]>ar[i+1])
      {

           f=false; 
           break;
     }
      
   }
    if(f)
   cout<<"\ntrue";
   else
   cout<<"\nfalse";
    return 0;
}
