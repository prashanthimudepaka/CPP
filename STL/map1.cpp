/*key Value Pairs: Each element in a map is a pair consisting of a key and a value.

Unique Keys: Keys in a map must be unique. 
If you insert an element with a key that already exists, the value is updated, not added.

Ordered by Key: The elements are automatically sorted by their keys in ascending order 
(you can use custom comparators to change the sorting order).

Balanced Binary Tree: Internally, it uses a tree structure, providing O(log n) 
time complexity for insertions, deletions, and lookups.
*//**/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //map creation
    map<string,int> mp={{"mango", 2}, {"apple", 9}};
    mp["grape"]=12;
mp.insert({"orange", 18});
mp.emplace("cherry",3);
mp.erase("mango");
    for( auto it : mp){
        cout << "Key: " << it.first << ", Value: " << it.second<<endl;
    }
cout<<"max size:"<<mp.max_size()<<endl;
cout<<"size of map:"<<mp.size()<<endl;
auto it = mp.find("orange");
if(it!=mp.end()){
    cout<<"found";
}
  if (mp.count("banana") > 0) {
        cout << "banana is in the map." << endl;
    } else {
        cout << "\"banana\" is not in the map." << endl;
        mp.insert({"banana",10});
    }
    mp.clear();
 for( auto it : mp){
        cout << "Key: " << it.first << ", Value: " << it.second<<endl;
    }
    return 0;
}
