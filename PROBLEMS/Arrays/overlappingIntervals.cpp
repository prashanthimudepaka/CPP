/*18.Given an array of intervals, merge all the overlapping intervals 
and return an array of non-overlapping intervals.
Input:
 intervals=[[1,3],[2,6],[8,10],[15,18]]
 ->closure intervals merge (sort)
 ->start(sec)<end(first)
 ->

Output:
{1 8} ,{2 4}
{15 18 } {1, 3}, {8,10},{2,6}
 [[1,6],[8,10],[15,18]]*/
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    vector<vector<int>> v={{3,9},{2,6},{8,10},{15,18}};
    sort(v.begin(),v.end());
    vector<vector<int>> res;
     for(int i=0;i<v.size();i++)
    {
        int start=v[i][0];
        int end=v[i][1];
        if(!res.empty() && end<=res.back()[1])
        {
            continue;
        }
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j][0]<=end)
            {
                end=max(end,v[j][1]);
            }
            else{
                break;
            }
        }
        res.push_back({start,end});
    }
for(auto i : res)
     {
        cout<< "{" <<i[0]<<" "<<i[1]<<"}"<<endl;

    }

    //{{1,10},{2,5},{6,11}}
    
    return 0;
 }