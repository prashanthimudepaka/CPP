#include <bits/stdc++.h>
using namespace std;

bool canplace(vector<int>arr, int mid, int m) {
    long long sum = 0;
    int countst = 1; // Start with one student

    for (int i = 0; i < arr.size(); i++) { 
        

        if (sum + arr[i] <= mid) {
            sum += arr[i];
        } else {
            countst++;
            sum = arr[i];
            if (countst > m) return false; // reduce number of studnts to get max number of pages
        }
    }
    return true;
}

int allocated(vector<int> arr, int n, int m) {
    if (m > n)
        return -1;

    int l = *max_element(arr.begin(), arr.end());
    int h = accumulate(arr.begin(), arr.end(), 0);
    int result = -1;

    while (l <= h) {
        int mid = (l + h) / 2;
        if (canplace(arr, mid, m)) {
            result = mid;
            h = mid - 1; //minimum of all pages allocated
        } else {
            l = mid + 1;
        }
    }
    return result;
}

int main()
{

    vector<int> arr={12, 34, 67, 90};
    int m=2;
    cout<<allocated(arr,arr.size(),m);
}