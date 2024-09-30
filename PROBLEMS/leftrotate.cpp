//Given an array of N integers, left rotate the array by one place.
//1 2 3 5 7
//2 3 5 7 1
//1 2 3 4 5 6 7 8 9
//2 3 4 5 6 7 8 9 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.emplace(v.end(),value);
    }
    int first=v[0];
    for(int i=0;i<n-1;i++)
    {
        v[i]=v[i+1];
    }
    v[n-1]=first;
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    return 0;

}