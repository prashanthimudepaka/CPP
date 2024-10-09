#include<bits/stdc++.h>
using namespace std;
int  main()
{
    vector<int> v={7,1,4,3,2,6};
    int min_price=INT_MAX;
    int max_profit=0;
    int cp;
    for(int i=0;i<v.size();i++)
{
    if(v[i]<min_price)
    {
        min_price=v[i];
    }
    cp=v[i]-min_price;
    if(cp>max_profit)
    {
        max_profit=cp;
    }
}
cout<<max_profit;
    return 0;
}