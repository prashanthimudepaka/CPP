#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }
    cout<<"elements in vector"<<endl;
    for(auto it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}