/*You are given an array of integers, 
your task is to move all the zeros in the array to the
 end of the array and move 
non-negative integers to the front by maintaining their order.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of vector:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ind=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            v[ind]=v[i];
            ind++;
        }
   }
    for(int i=ind;i<n;i++)
    {
        v[i]=0;
        ind++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }

    return 0;
}

/*
1 0 2 0 3
0 1 2 3 4

1 2 0 0 3

1 2 3 0 0
      
ind=2
i=ind+1 -n
if(ar[i]!=0)
temp=ar[i]
ar[i]=ar[ind]
ar[ind]=temp

 
 */
