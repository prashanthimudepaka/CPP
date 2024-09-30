#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    for(int i=1;i<8;i++)
    {
        vec.push_back(i);
    }
     for(auto it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    //1 2 3 4 5 6 7
    //5 6 7 1 2 3 4
    //4 3 2 1 7 6 5
    reverse(vec.begin()+3,vec.end());
    cout<<"elements in vector"<<endl;
    for(auto it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}


