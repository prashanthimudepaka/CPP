#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> v)
{
    for(int i:v)
    {
        cout<<i<<" ";
    }
}
void bublesort(vector<int> v)
{
    // 1 3 4 5 6
    int n=v.size();
    int temp;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }

    }
    printArr(v);
 // 8, 3, 1, 7, 9, 2, 5

// iteration 0

// 3 8 1 7 9 2 5
// i=1
// 3 1 8 7 9 2 5
// i=2
// 3 1 7 8 9 2 5
// i=3
// 3 1 7 8 9 2 5
// i=4
// 3 1 7 8 2 9 5
// i=5
// 3 1 7 8 2 5 9
// largest element is sorted after first iteration
  
}

void selectionSort(vector<int> v)
{
    int min = 0;
    int n = v.size();
    int temp;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[min] > v[j])
            {
                min = j;
            }
        }
        temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }

    // vector<int> res=v;
    for (int i : v)
    {
        cout << i;
    }
}

/*
insertion sort

8, 3, 1, 7, 9, 2, 5

0
8, 3, 1, 7, 9, 2, 5

1
3, 8, 1, 7, 9, 2, 5

2
1 3 8 7 9 2 5

3
1,3,7,8,9,2,5

4
0 1 2 3 4 5 6
1,3,7,8,9,2,5
1 3 7 8 2 9 5
1 3 7 2 8 9 5
1 3 2 7 8 9 5
1 2 3 7 8 9 5


5

1,2,3,7,8,9,5

6th

1,2,3,5,7,8,9


(i=0 n-1)
for(j=i j>0 j--) 
  if(ar[j]<ar[j-1])
{
   ar[j]
}

*/
void InsertionSort(vector<int> v)
{
    int n=v.size();
    int temp;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(v[j]<v[j-1])
            {
                temp=v[j];
                v[j]=v[j-1];
                v[j-1]=temp;
            }
        }
    } 
    for(int i:v)
    {
        cout<<i<<" ";
    }
}
int main()
{
    vector<int> v = {8, 3, 1, 7, 9, 2, 5};

    // InsertionSort(v);
    bublesort(v);

    return 0;
}