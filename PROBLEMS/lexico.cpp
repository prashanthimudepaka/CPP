#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={30,10,20};
    next_permutation(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<" "<<i;
    }
    return 0;

}