/*Given an array that 
  contains only 1 and 0 return the count of 
  maximum consecutive ones in the array.
*/
// 1 0 0 1 1 0 1 1


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v2;
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.emplace(v.end(),value);
    }

    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            count++;
            maxi=max(maxi,count);
        }
        else
        {
             count=0;
        }
        
    }
    cout<<"maxi="<<maxi;
// 1 0 0 1 1 0
//maxi=1
    return 0;
}