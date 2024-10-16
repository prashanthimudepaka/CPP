#include<bits/stdc++.h>
using namespace std;
int main()
{

    int r=5;
    int col=2*(r);
  
      for(int i=r;i>=0;i--)
    {
        for(int k=i;k>=0;k--)
        {
            cout<<" ";
        }
        for(int j=(col-i)-1;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

// cout<<"down"<<endl;Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated.
      for(int i=0;i<=r;i++)
    {
        for(int k=0;k<=i;k++)
        {
            cout<<" ";
        }
        for(int j=i;j<(col-i)-1;j++)
        {
            cout<<"*";
        
        }
        cout<<endl;
    }

    return 0;
}