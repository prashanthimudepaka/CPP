#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  int m;
  cout<<"enter no of vertices:"<<endl;
  cin>>n;
  cout<<"enter no of edges:"<<endl;
  cin>>m;
vector<vector<int>> vec(n+1,vector<int>(n+1,0));
for(int i=0;i<m;i++)
{
    int u;
    int v;
    cin>>u>>v;
    vec[u][v]=1;
    vec[v][u]=1;

}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}

/*
n m
5 7

1 2
2 3
2 5
1 5
3 5
3 4
4 5


*/