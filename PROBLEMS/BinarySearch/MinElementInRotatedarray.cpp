/*5) Given an integer array arr of size N, sorted in
 ascending order (with distinct values) and a target value k. Now the array is rotated at 
some pivot point unknown to you. Find the index at which k is present and if k is not present return -1.

inp: 10 20 30 40 0 3 5 7 9
     0  1   2  3  4  5  6 7
     10 1 2 3 4 5 6 7 8 9
     0  1 2 3 4 5 6 7 8 9 */
#include<bits/stdc++.h>
using namespace std;
int findK(vector<int> nums)
{
    int l=0;
        int mid;
        int h=nums.size()-1;
        int m=INT_MAX;
        while(l<=h)
        {
            mid=(l+h)/2;
            
           
            if(nums[l]<=nums[mid])
            {
                 m=min(m,nums[l]);
                 l=mid+1;

            }
             
              
            else
            {
                 m=min(nums[mid], m);
                 h=mid-1;

            }    

        }


    return m;
}

int main()
{
    vector<int> v={10, 20 , 25, 50, 1,  2,  3  ,4 };
   
    int x=findK(v);
    
    
        cout<<x;
   

    return 0;
}
