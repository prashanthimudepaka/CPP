#include <bits/stdc++.h>
using namespace std;
//1.
void mapDemo(){
     // 1. Default Constructor
    map<int, string> myMap;

    // 2. Insertion
    myMap.insert({1, "apple"});
    myMap.insert({2, "banana"});
    myMap.insert(make_pair(3, "cherry"));
    myMap[4] = "date";

    // 3. Size and Empty
    cout << "Size of map: " << myMap.size() << endl;
    cout << "Is map empty? " << myMap.empty() << endl;

    // 4. Access Elements
    cout << "Element with key 2: " << myMap[2] << endl;
    
    // 5. Iteration
    cout << "Map elements: ";
    for (const auto& elem : myMap) {
        cout << "(" << elem.first << ", " << elem.second << ") ";
    }
    cout << endl;

    // 6. Find Element
    auto it = myMap.find(3);
    if (it != myMap.end()) {
        cout << "Found key 3 with value: " << it->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    // 7. Erase Elements
    myMap.erase(2);  // Erase element with key 2
    cout << "After erasing key 2, size: " << myMap.size() << endl;

    // 8. Clear All Elements
    myMap.clear();
    cout << "After clearing, size: " << myMap.size() << endl;

    // 9. Insert Multiple Elements
    myMap.insert({1, "apple"});
    myMap.insert({2, "banana"});
    myMap.insert({3, "cherry"});
    myMap.insert({4, "date"});

    // 10. Lower Bound and Upper Bound
    auto lb = myMap.lower_bound(2);
    auto ub = myMap.upper_bound(3);
    cout << "Lower bound of 2: (" << lb->first << ", " << lb->second << ")" << endl;
    if (ub != myMap.end()) {
        cout << "Upper bound of 3: (" << ub->first << ", " << ub->second << ")" << endl;
    } else {
        cout << "Upper bound of 3 is end()" << endl;
    }

    // 11. Equal Range
    auto range = myMap.equal_range(3);
    cout << "Equal range of 3: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << "(" << it->first << ", " << it->second << ") ";
    }
    cout << endl;

    // 12. Key Comparison Function
    auto keyComp = myMap.key_comp();
    cout << "Comparison result (1 < 2): " << keyComp(1, 2) << endl;

    // 13. Value Comparison Function
    auto valueComp = myMap.value_comp();
    cout << "Comparison result ((1, 'apple') < (2, 'banana')): " << valueComp(make_pair(1, "apple"), make_pair(2, "banana")) << endl;

    // 14. Get Allocator
    auto alloc = myMap.get_allocator();
    cout << "Allocator used by map" << endl;

}
//2.
void multimapDemo(){
    // 1. Default Constructor
    multimap<int, string> myMultiMap;

    // 2. Insertion
    myMultiMap.insert({1, "apple"});
    myMultiMap.insert({1, "green apple"});
    myMultiMap.insert({2, "banana"});
    myMultiMap.insert(make_pair(3, "cherry"));
    myMultiMap.insert({4, "date"});
    myMultiMap.insert({4, "fig"});

    // 3. Size and Empty
    cout << "Size of multimap: " << myMultiMap.size() << endl;
    cout << "Is multimap empty? " << myMultiMap.empty() << endl;

    // 4. Access Elements (by Key)
    cout << "Elements with key 1: ";
    auto range = myMultiMap.equal_range(1);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // 5. Iteration
    cout << "Multimap elements: ";
    for (const auto& elem : myMultiMap) {
        cout << "(" << elem.first << ", " << elem.second << ") ";
    }
    cout << endl;

    // 6. Find Element
    auto it = myMultiMap.find(3);
    if (it != myMultiMap.end()) {
        cout << "Found key 3 with value: " << it->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    // 7. Erase Elements (by Key and by Iterator)
    myMultiMap.erase(2);  // Erase all elements with key 2
    cout << "After erasing key 2, size: " << myMultiMap.size() << endl;

    // Erase elements by iterator
    auto it_to_erase = myMultiMap.find(4);
    if (it_to_erase != myMultiMap.end()) {
        myMultiMap.erase(it_to_erase);
    }
    cout << "After erasing one instance of key 4, size: " << myMultiMap.size() << endl;

    // 8. Clear All Elements
    myMultiMap.clear();
    cout << "After clearing, size: " << myMultiMap.size() << endl;

    // 9. Insert Multiple Elements
    myMultiMap.insert({1, "apple"});
    myMultiMap.insert({1, "green apple"});
    myMultiMap.insert({2, "banana"});
    myMultiMap.insert({3, "cherry"});
    myMultiMap.insert({4, "date"});
    myMultiMap.insert({4, "fig"});

    // 10. Lower Bound and Upper Bound
    auto lb = myMultiMap.lower_bound(3);
    auto ub = myMultiMap.upper_bound(3);
    cout << "Lower bound of 3: (" << lb->first << ", " << lb->second << ")" << endl;
    if (ub != myMultiMap.end()) {
        cout << "Upper bound of 3: (" << ub->first << ", " << ub->second << ")" << endl;
    } else {
        cout << "Upper bound of 3 is end()" << endl;
    }

    // 11. Equal Range
    auto range2 = myMultiMap.equal_range(4);
    cout << "Equal range of 4: ";
    for (auto it = range2.first; it != range2.second; ++it) {
        cout << "(" << it->first << ", " << it->second << ") ";
    }
    cout << endl;

    // 12. Key Comparison Function
    auto keyComp = myMultiMap.key_comp();
    cout << "Comparison result (1 < 2): " << keyComp(1, 2) << endl;

    // 13. Value Comparison Function
    auto valueComp = myMultiMap.value_comp();
    cout << "Comparison result ((1, 'apple') < (2, 'banana')): " << valueComp(make_pair(1, "apple"), make_pair(2, "banana")) << endl;

    // 14. Get Allocator
    auto alloc = myMultiMap.get_allocator();
    cout << "Allocator used by multimap" << endl;
}
//4.
void setDemo()
{
     set<int> s;
    for(int i=0;i<10;i++)
    {
        s.insert(i);
    }
    cout<<"elements in vector"<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

   if(s.count(12)>0)
   {
    cout<<"\n12 is present";
   }
   else{
    cout<<"\n12 not present";
   }
   cout<<"size="<<s.size()<<endl;
   cout<<s.max_size();
   s.erase(1);
   for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
auto it = s.find(10); // Returns iterator to 10
if (it != s.end()) {
    cout<<"10 is found\n";
}
else{
    cout<<"element not found\n";
}
int n = s.size();  
cout<<"size:"<<n<<endl;
if (s.empty()) {
    cout<<"set is empty\n";
}
else{
    cout<<"set contains elements\n";
}


set<int> st={1,5,20,30};
auto i = st.lower_bound(20);

    if (i != st.end()) {
        std::cout << "Lower bound of 20 is: " << *i << std::endl;  // Output: 30//greater than or equal to the value.
    } else {
        std::cout << "No element found!" <<endl;
    }

auto k = st.upper_bound(5);  //(first element > 20)strictly greater than the value.


    if (k != st.end()) {
        std::cout << "Upper bound of 5 is: " << *k << endl;  
    } else {
        std::cout << "No element found!" << std::endl;
    }
}
//5.
void multisetDemo(){
 multiset<int> mset;

    // Insert elements
    mset.insert(10);
    mset.insert(20);
    mset.insert(10);   // Duplicate allowed
    mset.insert(30);

    // 1. size()
    cout << "Size: " << mset.size() << endl;

    // 2. empty()
    cout << "Is the multiset empty? " << mset.empty() << endl;

    // 3. count()
    cout << "Count of 10: " << mset.count(10) << endl;

    // 4. find()
    auto it = mset.find(20);
    if (it != mset.end()) {
        cout << "Element found: " << *it << endl;
    }

    // 5. equal_range()
    auto range = mset.equal_range(10);
    for (auto itr = range.first; itr != range.second; ++itr) {
        cout << "Equal range for 10: " << *itr << endl;
    }

    // 6. erase() - Erase all occurrences of 10
    mset.erase(10);
    cout << "After erasing 10, size: " << mset.size() << endl;

    // 7. clear()
    mset.clear();
    cout << "After clearing, size: " << mset.size() << endl;

    // 8. begin() and end()
    mset.insert(40);
    mset.insert(50);
    cout << "Elements in multiset: ";
    for (auto it = mset.begin(); it != mset.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 9. rbegin() and rend()
    cout << "Reverse elements: ";
    for (auto rit = mset.rbegin(); rit != mset.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // 10. swap()
    multiset<int> other;
    other.insert(60);
    other.insert(70);
    mset.swap(other);
    cout << "After swap, mset contains: ";
    for (auto elem : mset) {
        cout << elem << " ";
    }
    cout << endl;

    // 11. key_comp()
    auto key_comp = mset.key_comp();
    cout << "Comparison result (50 < 60): " << key_comp(50, 60) << endl;

    // 12. value_comp()
    auto value_comp = mset.value_comp();
    cout << "Comparison result (50 < 60): " << value_comp(50, 60) << endl;

    // 13. get_allocator()
    auto alloc = mset.get_allocator();
    cout << "Allocator used by multiset" << endl;

}
//6.
void AllVectorDemo(){
    
    vector<int> vec;
    vec.assign(5, 10);
     for (int i : vec) 
     {
        cout << i << " ";
     }
    
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2;

   //1
    vec2.assign(vec1.begin(), vec1.end());
    //why cant we use vec1[0]

   
cout<<"copy of one vector to other"<<"\n";
    for (int i : vec2) {
        cout << i << " ";
    }
//2
 vec1.insert(vec1.begin(),11);

 vec1.emplace_back(6);
 vec1.erase(vec1.begin());
 vec1.erase(vec1.end());
vec1.emplace_back(7);
vec1.emplace_back(8);
vec1.emplace_back(9);
vec1.emplace_back(11);
//3
cout<<"elements at index 1: "<<vec1.at(1)<<"\n";
//4
cout<<"last element: "<<vec1.back()<<"\n";
//5
cout<<"capacity: "<<vec1.capacity()<<"\n";
//6,7
for(auto it=vec1.cbegin();it!=vec1.cend();++it){
cout<<*it<<" ";

}
//8
vec1.resize(15);
cout<<"vector size ="<<vec1.size()<<"\n";
//9
vec1.emplace(vec1.begin()+2,110);
cout<<"elemnts after emplace"<<"\n";
 for (int i : vec1) {
        cout << i << " ";
    }
   //10
   vector<int> a = {11,12,13,14,15};
    vector<int> b={6,7,8,9,10};
    a.swap(b);
    
    cout<<"elements after swap a elements are \n";
     for (int i : a) {
        cout << i << " ";
    }
    cout<<"elements after swap B elements are \n";

     for (int i : b) {
        cout << i << " ";
    }
    a.insert(a.begin(),1000);
    cout<<"after insert:\n";
    for (int i : a) {
        cout << i << " ";
    }
    //why cant i use below code 
   /* if(a.find(5)!=a.end())
    {

    }*/
   if(find(a.begin(),a.end(),5)!=a.end())
   {

   cout<<"element 5 found in vector"<<endl; 
   }
   else{
    cout<<"not found 5"<<endl;
   }
}
//7.
void pairsDemo()
{
  /*    pair<int,int> p;
  pair<int,int> p1;
  p.first=12;
  p.second=13;
  p1.first=11;
  p1.second=19;
  p.swap(p1);
  cout<<p1.first<<" "<<p1.second;
  cout<<p.first<<" "<<p.second;
*/
// Creating pairs
      // Creating pairs
    pair<int, string> p1(1, "apple");
    auto p2 = make_pair(2, "banana");
    
    // Accessing and modifying values
    cout << "First of p1: " << p1.first << endl;
    cout << "Second of p1: " << p1.second << endl;

    p1.first = 3;
    p1.second = "cherry";
    cout << "Modified p1: (" << p1.first << ", " << p1.second << ")" << endl;

    // Using pairs with containers (map)
    map<int, string> myMap;
    myMap.insert(make_pair(1, "apple"));
    myMap.insert(make_pair(2, "banana"));

    // Iterating through the map
    cout << "Elements in map: ";
    for (const auto& elem : myMap) {
        cout << "(" << elem.first << ", " << elem.second << ") ";
    }
    cout << endl;

    // Comparison operators
    pair<int, string> p3(3, "date");
    pair<int, string> p4(3, "date");
    pair<int, string> p5(4, "elderberry");

   
    // Creating pairs
    pair<int, string> pi(1, "apple");
    auto pj = make_pair(2, "banana");
    
    // Accessing and modifying values
    p1.first = 3;
    p1.second = "cherry";

    // Store pairs in a vector
    vector<pair<int, string>> pairs = {pi, pj};

    // Loop through the vector and print values
    for (const auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
}
//8.
void vector2D()
{
    vector<vector<int>> v;
    vector<int> v1;

    v1.emplace_back(1);
    v1.emplace_back(2);
    v1.emplace_back(3);
    v1.emplace_back(4);
    v.emplace_back(v1);

    int rows, cols, element;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        vector<int> row;
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> element;
            row.push_back(element); // Add elements to the row
        }
        v.push_back(row); // Add the row to the matrix
    }

    for (auto row : v)
    {
        for (auto element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    vector<vector<int>> vec(4);
    vector<int> row;
    for (int i = 0; i < 4; i++)
    {
        // cout << "[ ";
        for (int j = 0; j < 4; j++)
        {
            int value;
            cin >> value;
            row.push_back(value);
        }
        vec.push_back(row);

        for (auto innerVec : vec)
        {
            // cout << "[ ";
            for (int value : innerVec)
            {
                cout << value << " ";
            }
        }
    }
}
void pairWithinMap(){
       // Declare a map where key is int and value is a pair of string and double
    map<int, pair<string, double>> studentScores;

    // Inserting elements
    studentScores[1] = make_pair("John", 85.5);
    studentScores[2] = make_pair("Emma", 90.2);

    // Accessing elements
    for (auto student : studentScores) {
        cout << "ID: " << student.first 
                  << ", Name: " << student.second.first 
                  << ", Score: " << student.second.second << endl;
    }

}

//9.
void unordered_multimapDemo()
{
    unordered_multimap<int, string> umm;
    int key;
    string value;
    int n;
    cout << "enter number of key value pairs: ";
    cin >> n;
    // umm.first=12
    // umm.second="prashanthi"
    for (int i = 0; i < n; i++)
    {
        cout << "\n enter key:\n";
        cin >> key;
        cout << "enter value for " << key << ":";
        cin >> value;
        umm.emplace(key, value);
    }
    cout << (umm.begin())->first << " " << (umm.begin())->second << endl;
    for (auto i : umm)
    {
        cout << i.first << "=>" << i.second << endl;
    }
    /*umm.begin()--> points to address at begining of unordered_multimap
    umm.
    An unordered multimap in C++ is a data structure that stores key-value pairs,
     similar to a hash table, but allows multiple values for the same key.
      It is part of the C++ Standard Template Library (STL) and
      uses a hash function to determine where to store the elements.

-> Allows Duplicate Keys: Unlike a regular unordered_map, where each key is unique, an unordered_multimap allows multiple entries for the same key.
This makes it useful when you need to store and retrieve multiple values associated with a single key.

-> No Ordering: The elements are stored in no particular order, which makes lookup, insertion, and deletion operations on average
O(1) (constant time).

-> Hash-Based Structure: It uses a hash table internally, providing fast lookups, insertions, and deletions compared to tree-based maps like std::map.

Use Cases:
->Counting Frequencies: If you want to associate items with counts (like a histogram) but multiple keys may map to the same value.
Multivalued Data: When you need to store multiple values for the same key,
such as storing students with the same grade or employees with the same department.
Performance Critical Operations: For fast insertions and lookups when ordering is not required.

    */

    unordered_multimap<string, int> ummap;

    // Insert elements using std::pair
    ummap.insert(make_pair("apple", 1));
    ummap.insert(make_pair("apple", 2));
    ummap.insert(make_pair("banana", 3));
    ummap.insert(make_pair("orange", 4));

    // bucket_count()
    cout << ummap.bucket_count() << endl;

    // count() for key "apple"
    cout << ummap.count("apple") << endl;

    // size()
    cout << ummap.size() << endl;

    // empty()
    cout << ummap.empty() << endl;

    // equal_range() for key "apple"
    auto range = ummap.equal_range("apple");
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // swap() with another unordered_multimap
    unordered_multimap<string, int> other;
    other.insert(make_pair("grape", 5));
    ummap.swap(other);
    for (auto &pair : ummap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // find() for key "orange"
    auto it = ummap.find("orange");
    if (it != ummap.end())
    {
        cout << it->first << ": " << it->second << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    // key_eq() to compare two keys
    auto compare = ummap.key_eq();
    cout << compare("apple", "orange") << endl;

    // hash_function() to get hash of "banana"
    auto hash_fn = ummap.hash_function();
    cout << hash_fn("banana") << endl;
}
//10.
void unordered_mutisetDemo()

{
    /*The unordered_multiset in C++ is a hash-based container that allows for the storage of
    duplicate elements without maintaining any specific order.
    It is similar to unordered_set, except it permits multiple occurrences of the same element.

Key Characteristics of unordered_multiset:

Allows Duplicate Elements: Multiple elements with the same value can be inserted.
Hash-Based: Elements are stored in buckets based on their hash values.
No Order: The elements are not stored in any particular order.
Buckets and Hashing: Like other hash-based containers, it uses a hash function to map elements to buckets.*/
    unordered_multiset<int> umset;
    unordered_multiset<int> other;
    // Insert elements
    umset.insert(10);
    umset.insert(20);
    umset.insert(10); // Duplicate allowed
    umset.insert(30);

    // 1. bucket_count() - Total number of buckets
    cout << "Bucket count: " << umset.bucket_count() << endl;

    // 2. bucket() - Get the bucket index for a given element
    cout << "Element 10 is in bucket: " << umset.bucket(10) << endl;

    // 3. bucket_size() - Number of elements in a specific bucket
    size_t bucket_index = umset.bucket(10);
    cout << "Number of elements in bucket of 10: " << umset.bucket_size(bucket_index) << endl;

    // 4. size() - Number of elements in the unordered_multiset
    cout << "Size: " << umset.size() << endl;

    // 5. empty() - Check if the set is empty
    cout << "Is the set empty? " << umset.empty() << endl;

    // 6. count() - Count occurrences of a specific element
    cout << "Count of 10: " << umset.count(10) << endl;

    // 7. find() - Find an element, returns iterator to the element
    auto it = umset.find(20);
    if (it != umset.end())
    {
        cout << "Element found: " << *it << endl;
    }

    // 8. equal_range() - Get the range of elements equal to a certain value
    auto range = umset.equal_range(10);
    for (auto itr = range.first; itr != range.second; ++itr)
    {
        cout << "Equal range for 10: " << *itr << endl;
    }

    // 9. swap() - Swap contents with another unordered_multiset

    other.insert(40);
    other.insert(50);
    umset.swap(other);
    cout << "After swap, umset contains: ";
    for (auto elem : umset)
    {
        cout << elem << " ";
    }
    cout << endl;

    // 10. key_eq() - Compare keys for equality
    auto key_equal_fn = umset.key_eq();
    cout << "Keys 40 and 50 equal? " << key_equal_fn(40, 50) << endl;

    // 11. hash_function() - Get the hash function
    auto hash_fn = umset.hash_function();
    cout << "Hash value of 50: " << hash_fn(50) << endl;
}
//11.
void stackDemo(){
    stack<int> s;
    stack<int> s1;
    stack<int> s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
     while(!s.empty()){
            s1.push(s.top());
            cout<<s.top();
            s.pop();   
        }
        while(!s1.empty())
        {   
            cout<<s1.top();
            s.push(s1.top());
            s1.pop();
        }
         while(!s.empty())
        {   
            cout<<s.top();
            s.pop();
        }
}
//12.
void priorityQueueDemo(){
    /*Priority Queue Basics
Max-Heap: The largest element is at the top.
Min-Heap: The smallest element is at the top.
Key Operations
Push: Insert an element into the priority queue.
Pop: Remove the element at the top.
Top: Access the element at the top.
Size: Get the number of elements in the priority queue.
Empty: Check if the priority queue is empty.*/
 
 // Max-Heap (default behavior)
    priority_queue<int> maxHeap;

    // Inserting elements
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(30);

    // Accessing elements
    cout << "Max-Heap Elements: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // Access the largest element
        maxHeap.pop();               // Remove the largest element
    }
    cout << endl;

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Inserting elements
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(30);

    // Accessing elements
    cout << "Min-Heap Elements: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // Access the smallest element
        minHeap.pop();               // Remove the smallest element
    }
    cout << endl;

}
//13.
void dequeDemo()
{
      // Create a deque with some initial values
    deque<int> d = {1, 2, 3, 4, 5};

    // Print initial deque
    cout << "Initial deque: ";
    for (const auto& elem : d) {
        cout << elem << " ";
    }
    cout << endl;

    // Access elements
    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "Element at index 2: " << d[2] << endl;

    // Modify elements
    d.at(2) = 10;
    d.push_front(0);
    d.push_back(6);

    // Print modified deque
    cout << "Modified deque: ";
    for (const auto& elem : d) {
        cout << elem << " ";
    }
    cout << endl;

    // Erase an element
    d.erase(d.begin() + 3);

    // Print deque after erase
    cout << "Deque after erase: ";
    for (const auto& elem : d) {
        cout << elem << " ";
    }
    cout << endl;

    // Resize the deque
    d.resize(8, 20);
    cout << "Deque after resize: ";
    for (const auto& elem : d) {
        cout << elem << " ";
    }
    cout << endl;

    // Clear the deque
    d.clear();
    cout << "Deque size after clear: " << d.size() << endl;

}
//14.
void unordered_mapDemo()
{
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
}
//15.
void unordered_setDemo(){
    // Create an unordered_set with some initial values
    unordered_set<int> uset = {1, 2, 3, 4, 5};

    // Print initial set
    cout << "Initial set: ";
    for (const auto& elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    // Access elements
    cout << "Finding element 3: ";
    auto it = uset.find(3);
    if (it != uset.end()) {
        cout << *it << endl;
    } else {
        cout << "Not found" << endl;
    }

    // Insert new elements
    uset.insert(6);
    uset.insert({7, 8, 9});
    cout << "Set after insertions: ";
    for (const auto& elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    // Erase an element
    uset.erase(4);
    cout << "Set after erasing element 4: ";
    for (const auto& elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    // Size and empty status
    cout << "Size: " << uset.size() << endl;
    cout << "Is empty? " << uset.empty() << endl;

    // Bucket information
    cout << "Number of buckets: " << uset.bucket_count() << endl;
    cout << "Bucket size for bucket 1: " << uset.bucket_size(1) << endl;
    cout << "Bucket for key 2: " << uset.bucket(2) << endl;

    // Rehashing and reserving
    uset.rehash(10);
    uset.reserve(50);
    cout << "Resized hash table" << endl;

    // Clear all elements
    uset.clear();
    cout << "Size after clear: " << uset.size() << endl;
}
//16.
void listDemo(){
    // Create a list and initialize with some values
    list<int> lst = {1, 2, 3, 4, 5};

    // Print the list
    cout << "List: ";
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Add elements
    lst.push_front(0);
    lst.push_back(6);
    cout << "After push_front and push_back: ";
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Remove elements
    lst.pop_front();
    lst.pop_back();
    cout << "After pop_front and pop_back: ";
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Insert and erase elements
    auto it = lst.begin();
    ++it;
    lst.insert(it, 10);
    lst.erase(it);
    cout << "After insert and erase: ";
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Sort, reverse, and remove duplicates
    lst.sort();
    lst.reverse();
    lst.push_back(3); // Adding duplicate
    lst.unique();
    cout << "After sort, reverse, and unique: ";
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Size and empty status
    cout << "Size: " << lst.size() << endl;
    cout << "Is empty? " << lst.empty() << endl;

    // Clear the list
    lst.clear();
    cout << "Size after clear: " << lst.size() << endl;

}
//17
void queueDemo(){
    // Create a queue and add some elements
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    // Print the front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Remove elements from the queue
    q.pop();
    cout << "After one pop:" << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Check size and empty status
    cout << "Size: " << q.size() << endl;
    cout << "Is empty? " << q.empty() << endl;

    // Add more elements
    q.push(4);
    q.push(5);
    cout << "After adding more elements:" << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Clear the queue
    while (!q.empty()) {
        q.pop();
    }
    cout << "Size after clearing: " << q.size() << endl;
}
int main()
{
    /*   1.pairs
         2.vector
         3.sets
         4. maps
         5.unordered_map
         6. unordered_set
         7.list
         8. deque
         9. stack
         10.proirity queue(min_heap and max_heap)
         11. multiset
         12. multimap
         13.unordered multi_map
         14.unordered multi_set
         15. queue

          */
     //pairsDemo();
     //AllVectorDemo();
    //setDemo();
    //mapDemo();
    // unordered_mapDemo();
    // unordered_setDemo();
    //listDemo();
    //dequeDemo();
    //stackDemo();
    //priorityQueueDemo();
    //multisetDemo();
    //multimapDemo();
    //unordered_multimapDemo();
    //unordered_mutisetDemo();
    //queueDemo();
    return 0;
}