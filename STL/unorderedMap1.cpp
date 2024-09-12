#include<bits/stdc++.h>
using namespace std;
int main() {
    // Declare an unordered_map
    unordered_map <string, int> mp;

    // Insert elements
    mp.insert({"apple", 1});
    mp["banana"] = 2;
    mp.emplace("cherry", 3);

    // Access and display elements
    cout << "Accessing elements:" << endl;
    cout << "apple: " << mp["apple"] <<endl;
    cout << "banana: " << mp.at("banana")<<endl;

    // Search for an element
    cout << "\nSearching for elements:"<<endl;
    auto it = mp.find("cherry");
    if (it != mp.end()) {
        cout << "cherry found with value: " << it->second << endl;
    } else {
        cout << "cherry not found" <<endl;
    }

    // Try searching for a non-existent key
    it = mp.find("grape");
    if (it != mp.end()) {
        cout << "grape found with value: " << it->second<<endl;
    } else {
        cout << "grape not found" << endl;
    }

    // Delete an element
    mp.erase("banana");

    // Check size and empty status
    cout << "\nSize and Capacity:" <<endl;
    cout << "Size: " << mp.size() <<endl;
    cout << "Is empty: " << (mp.empty() ? "Yes empty " : "No") << endl;
    cout << "Maximum size: " << mp.max_size()<<endl;

    // Iterate over elements
    cout << "\nIterating over elements:"<<endl;
    for (auto it : mp) {
        cout << it.first << ": " << it.second <<endl;
    }

    return 0;
}
