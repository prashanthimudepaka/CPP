#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multimap<int,int>u;
    u.insert(make_pair(1,12));
    auto it=u.begin();
    cout<<it->first;
    

    return 0;
}