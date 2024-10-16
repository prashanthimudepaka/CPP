#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c=0;
        int l=0;
        string s="1100101001";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                c=c+(i-l);
                l++;
            }
            
            
        }
        cout<<c;

    return 0;
}