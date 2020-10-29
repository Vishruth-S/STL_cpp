# Vectors

Vectors are sequence containers representing arrays that can change in size.   
<img src="https://external-preview.redd.it/t4WYdRStiv3sCmYpELIcNXq9hpL9ppvqBpcjr1TzA5g.jpg?auto=webp&s=0c7dbae06c6667a2a431c2ef9471b69aeea05907" alt="Vector meme" width="350px"/>

## Contents
* Basics

## Basics
### Declaring a vector
```cpp
vector<int> v1;  //{}
```
### Adding elements
`push_back()` is used to add elements to the end of a vector.   
**Syntax: `vector.push_back(element)`**
```cpp
v1.push_back(10); //{10}
v1.push_back(30); //{10,30}
v1.push_back(15); //{10,30,15}
v1.push_back(25); //{10,30,15,25}
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
vector<int> v4(v3); // {25,25,25}
```
