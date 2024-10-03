/*
16. Given an array of N integers. Find the elements that appear more 
than N/3 times in the array. If no such element exists, return an empty vector.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v= { 40,20,10,40,40}; 
    unordered_map<int,int> mp;
    int s=v.size();
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    for(auto it : mp)
    {
        //cout<<it.first<<it.second;
        if((s/3< it.second))
        {
            cout<<it.first;
            break;
        }
    }

    return 0;

}
