# Vectors

Vectors are sequence containers representing arrays that can change in size.   

## Contents
* Basics
* Adding elements
* Accessing elements
* Printing all elements
* Input a vector

## 1) Basics
### Declaring a vector - Syntax
```cpp
vector <datatype> name;
```
For example, to declare a vector of integers, we can use
```cpp
vector <int> v1;  
```

### Initializing a vector
A vector can also be initialized with elements just like it is done for an array
```cpp
vector<int> v2 = {1,3,2,5,8};
```
To initialize with a specific element
```cpp
vector<int> v3(5, 100); //{100,100,100,100,100}
vector<int> v3(3, 25);  //{25,25,25}
```
To Create a vector from another existing vector
```cpp
vector<int> v4(v3); //{25,25,25}
```

### Adding elements
`push_back()` is used to add elements to the end of a vector.   
**Syntax: `vector.push_back(element)`**
```cpp
vector<int> v1;  
v1.push_back(10); //{10}
v1.push_back(30); //{10,30}
v1.push_back(15); //{10,30,15}
v1.push_back(25); //{10,30,15,25}
```

### Accessing elements
Elements in a vector can be accessed in many ways
1) Using index
 ```cpp
 vector<int> v = {12,40,25,61,30};
 cout << v[3]; //prints 25
 cout << v[0]; //prints 12
 ```
 2) Using iterators
 ```cpp
 vector<int> v = {12,40,25,61,30};

 vector<int>::iterator it;  // Declaring iterator to a vector 
 it = v.begin(); //begin() returns an iterator pointing to the first element
 cout << *(it); //prints 12
 it++;
 cout << *(it); //prints 40
 it = it + 2;
 cout << *(it); //prints 61
 ```
 3) Using `at`
 ```cpp
 cout << v.at(3); //prints 25 (same as v[3])
 ```
 
 ### Printing all elements
 Elements of a vector can be printed using simple loops
 1) Using index
 ```cpp
 for (int i = 0; i < v.size(); i++)  //size() returns the size of the vector
 {
   cout << v[i] << " ";
 }
 ```
 2) Using iterator
 ```cpp
 for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
 {
    cout << *(it) << " ";
 }
 ```
 Iterators can also be declared using the `auto` keyword
 ```cpp
 for (auto it = v.begin(); it != v.end(); it++)
 {
    cout << *(it) << " ";
 }
 ```
 This can be made further smaller as
 ```cpp
 for (auto it : v)
 {
    cout << it << " ";
 }
 ```
 
 ### Input elements
 Simple loops can be used for this 
 1. If size is known
 ```cpp    
 vector<int> vec;
 int n = 5; //assume n is size
 int input;
 for (int i = 0; i < n; i++)  //simple for loop 
 {
     cin >> input;
     vec.push_back(input);
 }
 ```
 2. If size is not known
 ```cpp
 vector<int> vec;
 int input;
 while (cin >> input) //enter any non-integer to end the loop!
 {
     vec.push_back(input);
 }
 ```
 
 
