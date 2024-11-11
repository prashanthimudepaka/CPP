/*You have been given a non-empty grid ‘mat’ with 'n' rows and 'm' columns consisting of only 0s and 1s. 
All the rows are sorted in ascending order.
Your task is to find the index of the row with the maximum number of ones.
Note: If two rows have the same number of ones, consider the one with a smaller index. 
If there's no row with at least 1 zero, return -1.


Example 1:
Input Format:
 n = 3, m = 3, 
mat[] = 
1 1 1
0 0 1
0 0 0
Result:
 0
Explanation:
 The row with the maximum number of ones is 0 (0 - indexed).

Example 2:
Input Format:
 n = 2, m = 2 , 
mat[] = 
0 0
0 0
Result:
 -1
Explanation:
  The matrix does not contain any 1. So, -1 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr,int value){
 int left = 0;
    int right = arr.size()-1;
    int ans=arr.size();
    
    while (left<=right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] >= value) {
           
            right = mid - 1;
            ans=mid;
        } else {
            
            left=mid+1;
        }
    }
    return ans;
     
}

int main()
{
        
        
    int cnt_max = 0;
    int index = -1;
vector<vector<int>> matrix = {{0,0,0,0},{0,0,1,1},{0,0,1,1}};
int n=3,m=4;
    //traverse the rows:
    for (int i = 0; i < n; i++) {
        // get the number of 1's:
        int cnt_ones = 0;
        //sort(matrix[i].begin(),matrix[i].end());
               cnt_ones  = m - lowerBound(matrix[i], 1);
        cout<<"at index:"<<i<<"count_ones="<<cnt_ones<<endl;
        if (cnt_ones > cnt_max) {
            cnt_max = cnt_ones;
            cout<<"max="<<cnt_max<<endl;
            index = i;
            cout<<"index="<<index<<endl;
        }
    }
for(int k=0;k<m;k++){
cout<<matrix[index][k];

}
cout<<endl<<index;
return 0;

}