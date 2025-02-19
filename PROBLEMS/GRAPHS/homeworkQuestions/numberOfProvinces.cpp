#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<vector<int>>& isConnected, vector<bool>& vis) {
            vis[node] = true;
            for (int j = 0; j < isConnected[node].size(); j++) {
                if (isConnected[node][j] == 1 && !vis[j]) { 
                    dfs(j, isConnected, vis);
                }
            }
    
    }
        int main()
        {
            vector<vector<int>> isConnected = {{1,0,0},{0,1,0},{0,0,1}};
            // vector<vector<int>> isConnected = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}; 
            int cnt=0;
            int n=isConnected.size();
                  vector<bool> vis(n, false);
    
    
            for (int i = 0; i < n; i++) {
                if (!vis[i]) {
                    dfs(i, isConnected, vis);
                    cnt++;
                }
            }
    
            cout<<"number of provinces:"<<cnt;
            return 0;
        }
    