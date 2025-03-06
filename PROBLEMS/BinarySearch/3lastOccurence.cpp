/*Given a sorted array of N integers, write a program to find the index 
of the last occurrence of the target key. If the target is not found then return -1. */
#include<bits/stdc++.h>

using namespace std;
int findLAst(vector<int> v, int target)
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
            l=mid+1;//--> last position// h=mid-1;first position
            
        }   
        else if(v[mid]>target)
        {
              h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
        return ans;


}

int main()
{
    vector<int> v={0,0,3,3,3,3,3,3,3,3};
    int t=3;
    int ans=findLAst(v,t);
    cout<<"answer="<<ans;

    return 0;
}