

#include<bits/stdc++.h>
using namespace std;


void f(int count)
{
    if(count==10) return;
    cout<<count<<endl;
    count++;
    f(count);

}
void PrintNto1(int count)
{
    if(count>1) return;
    cout<<count<<endl;
    count--;
    PrintNto1(count);

}
void name5(string name,int count)
{
    if(count>5) return;
    cout<<name<<endl;
  
    name5(name,count+1);

}
int main()
{
    int count=0;
    int n=10;
// PrintNto1(n);
name5("prashanthi",1);
    // f(count);
    return 0;
}