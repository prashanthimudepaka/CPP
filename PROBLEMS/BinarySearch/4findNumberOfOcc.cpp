/*Given a sorted array of N integers, write a program to find the index 
of the last occurrence of the target key. If the target is not found then return -1. */
#include<bits/stdc++.h>
//last occurrence
using namespace std;
int findLast(vector<int> v, int target)
{
    int l=0;
    int h=v.size()-1;
    int ans=-1;

    while(l<=h)
    {
        int mid=(l+h)/2;
        if(v[mid]==target)
        {
            ans=mid;
            l=mid+1; //include this
            
        }   
        else if(v[mid]>target) //upperbound
        {
              h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
        return ans;


}
int findfirst(vector<int> v, int target)
{
    int l=0;
    int h=v.size()-1;
    int ans=-1;

    while(l<=h)
    {
        int mid=(l+h)/2;
        if(v[mid]==target)
        {
            ans=mid;
            h=mid-1; //include this
            
        }   
        else if(target < v[mid])
        {
              h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
        return ans;


}
 pair<int,int> firstandlast(vector<int> v,int target )
 {
    pair<int,int> ans={findfirst(v,target),findLast(v,target)};
    return ans;
 }

int main()
{
    vector<int> v={0,0,3,3,3,9,10};
    int t=3;
   int count=0; 
   pair<int,int> p=firstandlast(v,t);
   cout<<"first Occurence="<<p.first<<" last occurance="<<p.second;
   count=(p.second-p.first)+1; //that give u induces so add 1 to get count
   cout<<"count="<<count;
    return 0;
}