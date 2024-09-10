#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    for(int i=0;i<10;i++)
    {
        s.insert(i);
    }
    cout<<"elements in vector"<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

   if(s.count(12)>0)
   {
    cout<<"12 is present";
   }
   else{
    cout<<"12 not present";
   }
   cout<<"size="<<s.size()<<endl;
   cout<<s.max_size();
   s.erase(1);
   for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}

