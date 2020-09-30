#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void stackBasics()
{
    stack<int> st; //declare a stack of integers

    //push() = perform push operation (inserting element at top)
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.push(5); //{5,3,3,2,1}

    cout << st.top(); // prints 5
    //NOTE: st[2] or st[any_index] is INVALID. Only top element can be accessed in a stack

    st.pop(); // Pops the topmost element, //{3,3,2,1}

    cout << st.top();  // prints 3
    cout << st.size(); // prints 4

    stack<int> st1, st2;
    st1.swap(st2); // swap s1 and s2;
}

void queueBasics()
{
    queue<int> q; //declare a queue of integers

    //since Q is LIFO, push() adds element to the end
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(5); // {1,2,5}

    cout << q.back(); // prints 5

    q.back() += 4; // adds 4 to element at back, ie, 5

    cout << q.back(); // prints 9

    cout << q.front(); // prints 1

    q.pop(); // deletes front element , {2.9}

    cout << q.front(); // prints 2

    q.push(4);        // {2,9,4}
    cout << q.size(); // prints 3, (size)

    //swap is same as stack
}

int main()
{
    // stackBasics();
    // queueBasics();
    return 0;
}