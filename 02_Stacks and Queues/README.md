# 1) Stack
A stack is a Last In First Out (LIFO) data structure, where a new element is added at one end (top) can be removed from that end only.

## Basics
### Declaring a stack - Syntax
```cpp
stack <datatype> name;
```
For example, to declare a stack of integers, we can use
```cpp
stack <int> stk;
```

## Functions
### Check if stack is empty
`empty()` returns true if the stack is empty, else returns false
```cpp
if(stk.empty())
  cout<<"Stack is empty";
else
  cout<<"Stack is not empty";
```

### Add an element into the stack
`push(x)` is used to insert an element x to the top of the stack
```cpp
stk.push(10); // inserts 10 into the stack
stk.push(20); // inserts 20 into the stack
```

### Get the top element from the stack
`top()` is used to get the topmost element from the stack
```cpp
int el = stk.top();
cout << el;  // prints 20;
```

### Pop an element from the stack
`pop()` removes an element in the top of stack
```cpp
stk.pop();  // Removes 20 from the stack
```

### Get the number of elements in the stack
`size()` returns the number of elements currently in the stack
```cpp
cout << stk.size(); // prints 1
```
         

NOTE: `pop()` and `top()` will throw an error if the stack is empty. So make sure to check `!stk.empty()` before calling these functions


# 2) Queue
A Queue is a First In First Out (FIFO) data structure, where a new element is added at one end (rear) can be removed from the other end (front).

## Basics
### Declaring a Queue - Syntax
```cpp
queue <datatype> name;
```
For example, to declare a queue of integers, we can use
```cpp
queue <int> q;
```

## Functions
### Check if queue is empty
`empty()` returns true if the queue is empty, else returns false
```cpp
if(q.empty())
  cout<<"Queue is empty";
else
  cout<<"Queue is not empty";
```

### Add an element into the queue
`push(x)` is used to insert an element x to the front of the queue
```cpp
q.push(10); // inserts 10 into the queue
q.push(20); // inserts 20 into the queue
```

### Get the front element from the queue
`front()` is used to get the front element from the queue
```cpp
int el = q.front();
cout << el;  // prints 10;
```

### Get the rear element from the queue
`back()` is used to get rear element from the queue
```cpp
int el = q.back();
cout << el;  // prints 20; 
```

### Remove an element from the queue
`pop()` removes an element in the front of queue
```cpp
q.pop();  // Removes 20 from the queue
```

### Get the number of elements in the queue
`size()` returns the number of elements currently in the queue
```cpp
cout << q.size(); // prints 1
```
NOTE: `pop()` and `front()` will throw an error if the queue is empty. So make sure to check `!q.empty()` before calling these functions
