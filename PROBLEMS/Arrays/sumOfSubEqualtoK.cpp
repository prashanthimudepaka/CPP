#include <bits/stdc++.h>
using namespace std;
int main() {
/*15. Given an array of integers and an integer k, return the total number of 
subarrays whose sum equals k.
A subarray is a contiguous non-empty sequence of elements within an array.*/
 vector<int> v = {1,2,3}; 
 int a=3;
 int n=v.size();
 vector<vector<int>> subArrays;
    for(int start=0;start<=n-1;start++)
    {
        for(int end=start;end<=n-1;end++)
        { 
            vector<int> sub;
            for(int k=start;k<=end;k++)
            {
                sub.push_back(v[k]);
            }
            subArrays.push_back(sub);
        }
    }
    int sum;
    int count=0;
for(auto sub:subArrays)
{ sum=0;
    cout<<"{";
    for(auto i:sub){
    sum=sum+i;
    cout<<i;
    }
    if(sum==a)
    {
        count+=1;
    }

    cout<<"}"<<endl;
    
}   
   
   cout<<"count="<<count;
    return 0;
}