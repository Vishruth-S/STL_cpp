# Algorithms

### 1) Sort
`sort` is used for sorting the elements in ascending order.  
```cpp
sort(first_iterator, last_iterator);
```
For example, to sort a vector - 
```cpp
vector <int> v = {2,5,3,6,4,1};
sort(v.begin(), v.end());   // v becomes {1,2,3,4,5,6}
```
Similarly, to sort a string - 
```cpp
string s = "sortme";
sort(s.begin(), s.end());
```
*Time complexity: O(nlogn)*


### 2) Reverse 
`reverse` Used for reversing the elements.    
```cpp
reverse(first_iterator, last_iterator);
```
For example, to reverse a vector-
```cpp
vector <int> v = {2,5,3,6,4,1};
reverse(v.begin(), v.end());   // v becomes {1,4,6,3,5,2}
```
Similarly, for a string
```cpp
string s = "reverseme";
reverse(s.begin(), s.end());
```
*Time complexity: O(n)*

### 3) Find sum of elements
`accumulate` is used for finding the sum of elements. It returns the sum.
```cpp
accumulate(first_iterator, last_iterator, initial value of sum);
```
For example, to find the sum of elements in a vector
```cpp
vector <int> v = {2,5,3,6,4,1};
int sum = accumulate(v.begin(), v.end(), 0); // sum = 21
```
*Time complexity: O(n)*

### 4) Find maximum and minimum
`*max_element` and `*min_element` are used for finding the maximum and minimum values in a vector.  
```cpp
*max_element (first_iterator, last_iterator);
*min_element (first_iterator, last_iterator);
```
For example, to find maximum and minimum value in a vector
```cpp
vector <int> v = {2,5,3,6,4,1};
int maximum = *max_element(v.begin(), v.end());  // 6
int minimum = *min_element(v.begin(), v.end());  // 1
```
*Time complexity: O(n)*

### 5) Binary Search
`binary_search` returns true if an element is present in a vector, else returns false. Works only on Sorted vectors.   
```cpp
binary_search(first_iterator, last_iterator, value to find);
```
For example, to check if a value is present in a vector,
```cpp
vector <int> v = {1,2,3,4,5,6};
int target = 4;
if(binary_search(v.begin(), v.end(), target)
  cout<<"Target found";
else
  cout<<"Target not found";
```
*Time complexity: O(logn)*
