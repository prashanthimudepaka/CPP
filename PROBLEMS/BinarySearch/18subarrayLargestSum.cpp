/*18) Given an integer array ‘A’ of size ‘N’ and an integer ‘K'. Split the array ‘A’ into ‘K’ 
non-empty subarrays such that the largest sum of any subarray is minimized. Your task is to return the 
minimized largest sum of the split.
A subarray is a contiguous part of the array.
Example 1:
Input Format:
 N = 5, a[] = {1,2,3,4,5}, k = 3
Result:
 6

Explanation:
 There are many ways to split the array a[] into k consecutive subarrays. 
 The best way to do this is to split the array a[] into [1, 2, 3], [4], and [5], where the largest sum 
 among the three subarrays is only 6.

Example 2:
Input Format:
 N = 3, a[] = {3,5,1}, k = 3
Result:
 5
Explanation:
 There is only one way to split the array a[] into 3 subarrays, i.e., [3], [5], and [1].
  The largest sum among these subarrays is 5.*/
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>arr, int mid, int m) {
       long long sum = 0;
    int countst = 1; // Start with one student

    for (int i = 0; i < arr.size(); i++) { 
        

        if (sum + arr[i] <= mid) {
            sum += arr[i];
        } else {
            countst++;
            sum = arr[i];
            if (countst > m) return false; // reduce number of studnts to get max number of pages
            //min(max)
        }
    }
    return true;
}

int minimizedSum(vector<int> arr, int k)
{
  int l=*max_element(arr.begin(),arr.end());
  int h=accumulate(arr.begin(),arr.end(),0);
 
  int ans=-1;
  while(l<=h)
  {     int mid=(l+h)/2;
        if(check(arr,mid,k))
        {
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }

  }
  return ans;


}

int main()
{

vector<int> arr={1,2,3,4,5};
int k=3;
cout<<minimizedSum(arr,k);
}