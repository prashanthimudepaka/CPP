/*
Given a non-empty array of integers arr, every
 element appears twice except for one. Find that single one.*/
 // 5 10 15 5 10

 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int exor=0;
    vector<int> v;
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.emplace(v.end(),value);
        exor=exor^v[i];
    }
    cout<<exor;
return 0;
}