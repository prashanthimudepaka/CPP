#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3}; 
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
    for(auto sub: subArrays)
    {
        cout<<"{";
        for(auto i : sub)
        {
            cout<<i;
        }
        cout<<"}"<<endl;
    }
    int maxsum=0;
    vector<int> maxsub;
     for(auto sub: subArrays)
    {
        int sum=0;
     
        for(auto i : sub)
        {
            sum+=i;
        }
         if(sum>maxsum)
         {
            maxsum=sum;
            maxsub=sub;

         }

    }
    
    for(auto el:maxsub)
    {
        cout<<"{"<<el<<"}"<<endl;
    }
    cout<<"maximum sum ="<<maxsum;

    return 0;
}