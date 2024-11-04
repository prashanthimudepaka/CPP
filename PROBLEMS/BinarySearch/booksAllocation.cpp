#include<bits/stdc++.h>
using namespace std;
bool canplace(vector<int> arr, int mid,int students)
{//
    int sum=0;
    int countst=1;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]+sum<=mid)
        {
            sum+=arr[i];
        }
        else{
            countst++;
        }
    }
    return false;
    //12, 34, 67, 90

}
int allocated(vector<int> arr,int m)
{
int ans=-1;
    int l=*max_element(arr.begin(),arr.end());
    int h=accumulate(arr.begin(),arr.end(),0);
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(canplace(arr,mid,m)==true)
        {
            ans=mid;
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

    vector<int> arr={12, 34, 67, 90};
    int m=2;
    cout<<allocated(arr,m);
}