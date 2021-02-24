# Maps
Map is basically a key-value pair. Each element has a key value and a mapped value. No two mapped values can have same key values.

Two Types-
  1. unordered map - Stores elements in random order, based on insertion. 
  2. ordered map - Stores elements in sorted order.
### Syntax
```cpp
map<key_datatype, value_datatype> map_name; // for ordered map
unordered_map<key_datatype, value_datatype> map_name; // for unordered map
```
For example, declaring a map having key as char and value as int is
```cpp
map<char, int> myMap; // for ordered map
unordered_map<char, int> myMap; // for unordered map
```
### Important Operations
#### 1) Insertion
Insertion can be done in 2 ways.  
  1. ```mp[key] = value;```
  2. ```mp.insert(pair(key,value))```
*Time complexity: O(logN) for ordered map, O(1) for unordered_map*

#### 2) Finding elements
```find(key)``` Gives the iterator to the key, if it is found otherwise it returns mp.end()
For example,
```cpp
if(mp.find(key) != mp.end())
  cout<<"Found";
else
  cout<<"Not found";
```
Alternatively, we can simply use `mp[key]`. This returns 0 if key doesn't exist, else returns the value corresponding to the key.
For example,
```cpp
if(mp[i])
  cout<<"found";
else
  cout<<"Not found";
```
*Time complexity: O(logN) for ordered map, O(1) for unordered_map*

#### 3) Accessing values by key
A value can be accesssed by using the key as
```cpp
cout << mp[key];  // prints value mapped to the key
```
*Time complexity: O(logN) for ordered map, O(1) for unordered_map*

#### 4) Accessing values by iterator, 
Key and values in a map can be accessed using an iterator. 
`iterator.first` gives the key, `iterator.second` gives the value.
```cpp
map<char, int>::iterator itr;
itr = mp.begin();
cout << "key= " << itr.first <<"value = "<< itr.second;
```
*Time complexity: O(logN) for ordered map, O(1) for unordered_map*

#### 5) Iterating over a map
```cpp
for(auto it:mp)
  cout<<it.first<<" "<<it.second<<'\n';
```



