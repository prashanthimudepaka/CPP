/*5) Given an integer array arr of size N, sorted in
 ascending order (with distinct values) and a target value k. Now the array is rotated at 
some pivot point unknown to you. Find the index at which k is present and if k is not present return -1.

inp: 10 20 30 40 0 3 5 7 9
     0  1   2  3  4  5  6 7
     10 1 2 3 4 5 6 7 8 9
     0  1 2 3 4 5 6 7 8 9 */
#include<bits/stdc++.h>
using namespace std;
int findK(vector<int> nums, int target)
{
    int l=0;
        int mid;
        int h=nums.size()-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[l]<=nums[mid])
            {
            if(nums[l]<=target && target<nums[mid])
                 h=mid-1;
                else
                l=mid+1;
            
              
                 
            }   
            else
            {
                if(nums[mid]<=target && target<=nums[h])
                 l=mid+1;
                else
                h=mid-1;
            }        
        }

    return -1;
}
// 10, 20 , 25,  50,  1,  2,  3,  4,   5
// 0  1   2  3   4  5  6  7  8

// 4  5  10  20 25  50  1  2 3 
// 0  1   2  3  4  5 6  7  8
// 4 < 25
 //h 

// 4 5 6 7 0 1 2

int main()
{
    vector<int> v={10, 20 , 25, 50, 1,  2,  3  ,4 };
    int target=3;
    int x=findK(v,target);
    if(x!=-1)
    {
        cout<<"found element at :"<<x;
    }
   

    return 0;
}
/*10 20 25 50 1 2 3 4 5    val=20
0   1  2 3  4 5 6 7 8  
l=0
h=8
mid=4
10<=1
else
l=mid+1
l=5

5+8/2==6
mid=6
3==target
return 6








 */