/*
11) A monkey is given ‘n’ piles of bananas, whereas the 'ith' pile has ‘a[i]’ bananas. An integer ‘h’ is also given, 
which denotes the time (in hours) for all the bananas to be eaten.

Each hour, the monkey chooses a non-empty pile of bananas and eats ‘k’ bananas. If the pile 
contains less than ‘k’ bananas, then the monkey consumes all the bananas and won’t eat any more bananas
 in that hour.w

Find the minimum number of bananas ‘k’ to eat per hour so that the monkey can eat all the bananas within ‘h’ hours.

Example 1:
Input Format:
 N = 4, a[] = {7, 15, 6, 3}, h = 8
Result:
 5
Explanation:
 If Koko eats 5 bananas/hr, he will take 2, 3, 2, and 1 hour to eat the piles accordingly. So,
  he will take 8 hours to complete all the piles.  

Example 2:
Input Format:
 N = 5, a[] = {25, 12, 8, 14, 19}, h = 5
Result:
 25
Explanation:
 If Koko eats 25 bananas/hr, he will take 1, 1, 1, 1, and 1 hour to eat the piles accordingly.
  So, he will take 5 hours to complete all the piles */
  #include <bits/stdc++.h>
  using namespace std;
  int hours(vector<int> v,int hr)
  {
    int total=0;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        total+=ceil((double)v[i]/hr);
        //cout<<ceil((double)v[i]/hr)<<endl;
    }
    return total;

  }
  int bananas(vector<int> v,int hr)
  {
    int l=1;
    int h=*max_element(v.begin(),v.end());

    while(l<=h)
    {
        int mid=(l+h)/2;
        int th=hours(v,mid);
        if(th<=hr)
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
    vector<int> v= {25, 12, 8, 14, 19};
    cout<<"number of bananas:"<<bananas(v,5);
    //cout<<hours(v,5);
    return 0;
  }