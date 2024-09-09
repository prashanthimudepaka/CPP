#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["name2"]=110;
    mp["name1"]=20;
    mp["name0"]=50;

    for(auto it= mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"->"<<it->second<<endl;

    }
    cout<<mp.max_size();
}