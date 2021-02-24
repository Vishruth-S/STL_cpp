# Strings
String is a collection of characters. 

#### Declaring a string
```cpp
string s;
```

#### Initializing a string
```cpp
string s = "hello";
```

#### Input/Output a string
```cpp
string s;
cin>>s;
cout<<s;
```

#### Concatenating a string
```cpp
string s1 = "hello"
string s2 = " world";
string s3 = s1 + s2;
cout << s3;  // prints hello world
```

#### Get size
```cpp
string s = "hello";
cout << s.size(); // prints 5
cout << s.length(); // prints 5
```

#### Compare 2 strings
```cpp
string s1 = "hello";
string s2 = "okay";
if(s1 == s2)
  cout << "same";
else
  cout << "Different";
```

#### Get substring
`substr()` is used to get the substring of a string.  
it takes 2 arguments, first is the index of the element from where we need the substring, and second is the number of characters from that index we need.  
For example
```cpp
string s = education"
cout << s.substr(2, 5);  // prints 5 characters starting from index 2. ie, ucati
```
