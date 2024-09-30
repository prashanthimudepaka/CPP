/*10. Given an array of N integers, write a program to 
return an element that occurs more than N/2 times in the given array. 
You may consider that such an element always exists in the array.
input: n=7 ar=[2 2 1 1 2 2 1]*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v= {2, 2,1 ,1, 2, 2, 1};
    unordered_map<int,int> mp;
    int s=v.size();
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    for(auto it : mp)
    {
        //cout<<it.first<<it.second;
        if((s/2 < it.second))
        {
            cout<<it.first;
            break;
        }
    }

    return 0;

}
