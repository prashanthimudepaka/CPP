#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
***** 
****
***
**
*
i=0
j=5
*****
****
***
**
*
*/
