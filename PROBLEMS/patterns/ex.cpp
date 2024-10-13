#include<bits/stdc++.h>
using namespace std;
int main()
{
    string words={"a"};
    char a=(char)words[0]+1;
    words.push_back(a);
    cout<<a;
    cout<<words.size();
    return 0;
}