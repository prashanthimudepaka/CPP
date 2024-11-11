#include<bits/stdc++.h>
using namespace std;

bool canplace(vector<int> v,int dist,int cows)
{ 
    sort(v.begin(),v.end());
    int countcows=1;
    int last=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-last>=dist)
        {  
            countcows++;
            last=v[i];
        }
        if(countcows>=cows)
        
            return true;
    } 
  return false;
    
}
int aggressiveCows()
{
    vector<int> v={0,3,4,7,10,9};
    int cows=4;
    int ans=-1;
    int maxi=*max_element(v.begin(),v.end());
    int mini=*min_element(v.begin(),v.end());
  for(int i=1;i<=maxi-mini;i++)
  {
     if(canplace(v,i,cows)==false)
     return (i-1);
  }
  return maxi-mini;


}

int binarySearch()
{
    vector<int> v={0,3,4,7,10,9};
    int cows=4;
    int ans=-1;
    sort(v.begin(),v.end());
    int l=1;

    int n=v.size()-1;
    int h=v[n-1]-v[0];
    while(l<=h)
    {
        int mid=((l+h)/2);
        if(canplace(v,mid,cows)==true)
        {
            l=mid+1;
            ans=mid;//i-1 return 

        }
        else
        {
            h=mid-1;
        }

    }
    return ans;



}
int main()
{

    cout<<"can be allocated max of "<<binarySearch()<<" cows";
}