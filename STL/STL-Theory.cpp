//standard template library
// vector
// unordered set
// set 
// unordered map 
// map
1)
/*vector is dynamic array it has ability to change size  
whenever we add or delete the size will automatically change
*/
//SYNTAX OF vector
#include<bit+/>
vector<int> nameOfVariable;
nameOfVariable.begin()//it points to first element of the vector
nameOfVariable.end()//upcoming address at end of array
nameOfVariable.push_back(11)//inserting element at end of vector
v1.insert(iterative_pointer(v1.begin()),5) //at any specified index 
ex:-v1.insert(v1.begin(),5) ..5 is value 
v1.insert(v1.end(),11)
v1.erase()//it deletes only specific element
ex:- v1.erase(v1.begin())
v1.erase(v1.begin(),v1.begin()+2) //range of elemnts erased
v1.pop_back()//it deletes last element and returns that eleemtn which is deleted
v1.front()//returns the first element
v1.back()//returns the last element
v1.clear()//it clears all elements in array
v1.empty()//it checks if element is empty or not
v1.size()//size of particular vector
v1.find()
s.emplace(vec.begin(),3)//instead of insert

2) //SET
//set stores in sorted order and unique elemnts 
set<int> s 
insert()
begin()
end()-- next to the last element
clear()
find()//search for a element
max_size()
