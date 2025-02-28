#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int l, int m, int h )
{
    vector<int> temp;
        int left=l;
        int right=m+1;
        while((left<=m) &&(right<=h))
        {
                if(v[left]<=v[right])
                {
                        temp.push_back(v[left]);
                        left++;
                }
                else
                {
                    temp.push_back(v[right]);
                    right++;
                }
        }
        while(right<=h)
        {
            temp.push_back(v[right]);
            right++;
        }
        while(left<=m)
        {
            temp.push_back(v[left]);
            left++;
        }
        for(int i=l;i<=h;i++)
        {
            v[i]=temp[i-l];
        }
}
void division(vector<int> &v,int l, int h)
{
    if(l>=h)
    {
        return;
    }
        int m=(l+h)/2;
        division(v,l,m);
        division(v,m+1,h);
        merge(v,l,m,h);

}

int main()
{

    vector<int> v={6, 2, 3 , 1,  9, 8,  7};
        division(v,0,v.size()-1);
        for(int i:v)
        {
            cout<<i<<" ";
        }
        return 0;
}