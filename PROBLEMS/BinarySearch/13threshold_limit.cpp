#include<bits/stdc++.h>
using namespace std;
    int smallestDivisor(vector<int>& nums, int limit) {
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        int result;
       
        while(l<=h)
        {   int sum=0;
            int mid=(l+h)/2;
            for(int i=0;i<nums.size();i++)
            {
                sum+=ceil(((double)nums[i])/(double)mid);
            }
            if(sum<=limit)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
     return l;   
    }
    int main()
    {
        vector<int> v={3,2,1,5};
        int limit=2;
        cout<<smallestDivisor(v,limit);

    }
