/*Given an integer array sorted in non-decreasing order, remove the duplicates in place such
 that each unique element appears only once. 
The relative order of the elements should be kept the same.
If there are k elements after removing the duplicates, 
then the first k elements of the array should hold the final result. 
It does not matter what you leave beyond the first k elements.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

//
//method 1
/*int n;
vector<int> v;
vector<int> inp;
cout<<"enter no of elements:";
cin>>n;
for(int i=0;i<n;i++)
{
    int value;
    cout<<"enter eleemnt:";
    cin>>value;
    inp.emplace(inp.end(),value);
}
sort(inp.begin(),inp.end());
int ind=0;
//1 2 2 3 4 5
    for(int x: inp)
    {
     if(find(v.begin(),v.end(),x)==v.end())  
        {
            inp[ind]=x;
            ind++;
            v.emplace(v.end(),x);
        }
}
for(int i=0;i<ind;i++)
{

    cout<<"["<<i<<"] "<<inp[i];
}*/

//method 2:

vector<int> inp;
int n;
cout<<"enter size:";
cin>>n;
for(int i=0;i<n;i++)
{
    int value;
    cout<<"enter eleemnt:";
    cin>>value;
    inp.emplace(inp.end(),value);
}
sort(inp.begin(),inp.end());
int i=0;
for(int j=1;j<n;j++)
{
    if(inp[i]!=inp[j])
    {
       inp[i+1]=inp[j];
       i++; 
    }
}//1 8 9 9 5 8
 //1 5 8 8 9 9
 //1 5 8 9 9
//i=3 ,j=5
int count=0;
for(int k=0;k<i+1;k++)
{

    cout<<"["<<k<<"] "<<inp[k];
    count++;
}
cout<<"total elements after removing are are:"<<count;
}
/*1 1 2 2 3 3 
  i     j
i=0

j=1 - n

if(inp[i]!=inp[j]):*/