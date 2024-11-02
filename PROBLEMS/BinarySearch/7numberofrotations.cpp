#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4,5,6,7,0,1,2,3};
    int min=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[min]>v[i])
        {
            min=i;
        }

    }
    cout<<min;



    return 0;
}