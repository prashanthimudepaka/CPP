#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4,5,-10,-20,-30,8};
    vector<int> neg;
    vector<int> pos;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            pos.push_back(v[i]);
        }
        else{
            neg.push_back(v[i]);
        }
    }
    cout<<"positive elements";
for(auto i:pos)
{
    cout<<i;
}
cout<<"negitive elements";
for(auto i:neg)
{
    cout<<i;
}
int ind=0;
for(int i=0;i<v.size();i=i+2)
{
    v[i]=pos[ind];
     v[i+1]=neg[ind];
     ind++;
}
for(auto i:v)
{
    cout<<" "<<i;
}
//4_5_8
    
}
/* [4,5,-10,-20,-30,8]
 [4,-10,5,-20,8,-30]
 int ind=0;
 int n=0;
 vector<int> neg;
 vector<int> pos;

 for(int i=0;i<v.size();i++)

 {
  if(v[i]>0)
  {
    pos.push_back(v[i])
  }
  else{
    neg.push_back(v[i])
  }
 }
 [-10,-20,-30,1,2,3]
 [1,-10,2,-20,3,-30]
for(int i=0;i<n;i++)
{
    if(v[i]>0)
    {
      v[i+1]=neg[i];
    }
}*/