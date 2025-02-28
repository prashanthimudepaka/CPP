#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,3,4,5,6};
    int n =v.size();
    int j=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[j]!=v[i])
        {
            j++;
            v[j]=v[i];
        }
    
    }
    v.resize(j + 1);
    for(int i:v)
    {
        cout<<i;
    }
}