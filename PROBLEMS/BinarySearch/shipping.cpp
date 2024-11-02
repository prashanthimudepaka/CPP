#include<bits/stdc++.h>
using namespace std;
int days(int m,vector<int> weights)
{

    int d=1;
	
    int sum=0;
	for(int i=0;i<weights.size();i++)
	{
		
		sum=sum+weights[i];
	
        if(sum>m)
        {
	         d++;
	        sum=weights[i];
        }   
    }  
    return d; 
}





int capacityS(vector<int> weights, int d)
{
    int l=*max_element(weights.begin(),weights.end());
    int h=accumulate(weights.begin(),weights.end(),0);

    while(l<=h)
    { 
        int mid=(l+h)/2;
        int x=days(mid,weights);
        if(x>d)
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }
       

    }

    return l;
}

int main()
{
     vector<int> weights={5,4,5,2,3,4,5,6};
     int d=5;
     int c=capacityS(weights,d);
     cout<<"capacity="<<c;

    return 0;
}