#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> s1;
    stack<int> s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
     while(!s.empty()){
            s1.push(s.top());
            cout<<s.top();
            s.pop();   
        }
        while(!s1.empty())
        {   
            cout<<s1.top();
            s.push(s1.top());
            s1.pop();
        }
         while(!s.empty())
        {   
            cout<<s.top();
            s.pop();
        }
      
    /*vector<int> v;
        while(!s.empty()){

            v.insert(v.begin(),s.top());
            cout<<s.top();
            s.pop();   
        }
        for(int j=0;j<v.size();j++)
        {
            s.push(v[j]);
        }
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }*/
    
        //swap
        //emplace
        
    
    

    return 0;
}