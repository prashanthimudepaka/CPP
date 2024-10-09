#include<bits/stdc++.h>
using namespace std;
 int binaryS(vector<int> nums, int target) {
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
            else if(target < nums[mid]){
            h=mid-1;

            }
            else {
                l=mid+1;

        }
        }
        return -1;
    }

int main()
{

    vector<int> v={5,5,5,5,5};
    int target=5;
    cout<<binaryS(v,target);
}