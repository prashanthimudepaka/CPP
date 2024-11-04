#include<bits/stdc++.h>
using namespace std;
int kthmissing(vector<int> ar,int k)
{
    int l=0;
    int h=ar.size()-1;
    while(l<=h)
    {       
        int mid=(l+h)/2;
        int missing=ar[mid]-(mid+1);
        //2,3,4,7,11  -->4/2=2     4-2+1=1  that is missing =1
        //if number of missing is less than k ie mid+1 position we goes
        if(missing<k)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return (k+h+1);

}


int main()
{
    vector<int> ar={4,7,9,10};
    int k=4;
    cout<<kthmissing(ar,k);
    return 0;
}




/*
bruteforce approach
s=[2,3,4,7,11]
k=5
n=11
count=0
for i in range(1,max(s)+1):
    if i not in s:
        count=count+1
        if count==k:
            print(i)
    

*/