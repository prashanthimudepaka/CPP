#include<bits/stdc++.h>
using namespace std;

int main()
{
     vector<int> v={2,0,0,3};
     int k=3;
     int cnt=0;
     int sum;
     for(int i=0;i<v.size();i++)
     {

         sum=0;
    
        for(int j=i;j<v.size();j++)
        {
            sum=sum+v[j];
        }
             if(sum==k)
            {
             cnt++;
             cout<<"sum="<<sum;
            }
    }
     cout<<"count="<<cnt;
     return 0;
     }
*/