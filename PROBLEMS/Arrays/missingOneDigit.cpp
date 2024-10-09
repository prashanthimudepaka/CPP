/*Given an integer N and an array of size N-1
 containing N-1 numbers between 1 to N. Find the number
 (between 1 to N),
 that is not present in the given array.*/
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>v[i];
    }
    int exor=0;
    for(int i=0;i<n-1;i++)
    {
        exor=exor^v[i]^(i+1);
    }
    exor=exor^n;
    cout<<"\nmissing number in array og range 1-n is :"<<exor;
    // nums = [3,1]
    //n=3
    //nums=[1,2,3]
    //size=4
    //1+2+3=6
    //4(4+1)/2=10
    //10-6=4
    //n*(n+1)/2==>

   /*n=1 sum=1 
   n=2 sum=1+2=3
   n=3 sum=1+2+4=7
   n=4 sum=1+2+3+4=10*/ 
    //n=4
    //124


    return 0;
 }