#include<bits/stdc++.h>
using namespace std;
int main()
{

string res="";
int n=3;
while(n)
{
    res+='0'+ n%2;//ascii of 0 is 48 ==>48+1=49 49 ascii is converted to its value and stored in res
  
    n/=2;
}
reverse(res.begin(), res.end());
cout<<res;
    return 0;
    
}