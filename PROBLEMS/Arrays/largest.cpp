#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*Given an array, arr. 
    The task is to find the largest element in it.*/
    vector<int> v;
   
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    { int value;
       cin>>value;
       v.emplace_back(value);

    }
     int maxi=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]>maxi)
        maxi=v[i];
    }
    
    cout<<maxi;
    //1,2,3,4,5
   



    return 0;

}

