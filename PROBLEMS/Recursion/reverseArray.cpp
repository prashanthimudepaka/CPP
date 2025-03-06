#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>& ar,int l,int r)
{
    if(l>=r) return ;
   swap(ar[l],ar[r]);
   fun(ar,l+1,r-1);
  

}
int main()
{
vector<int> ar={1,2,3,4,5};
// vector<int> a=
fun(ar,0,4);
for(int i:ar)
{
    cout<<i;
}
}