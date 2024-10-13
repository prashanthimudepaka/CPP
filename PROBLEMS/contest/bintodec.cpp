#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="10";
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            res=res*2 +(s[i]-'0');
        }
        cout<<res;
    return 0;
}