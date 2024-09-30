#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<(n-i);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
/*
0 1234
1 123
2
3
4
*/