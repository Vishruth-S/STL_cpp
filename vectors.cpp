#include <iostream>
#include <vector>

using namespace std;

void BasicsOfVectors()
{
    //An empty vector v1
    vector<int> v1; //{}
    //push_back() is used to add elements (adds to the end)
    v1.push_back(10); //{10}
    v1.push_back(20); //{10,20}
    v1.push_back(30); //{10,20,30}
    v1.push_back(40); //{10,20,30,40}

    //Vector of size 5 with
    //all elements as 100
    vector<int> v2(5, 100); //{100,100,100,100,100}

    vector<int> v3(5, 25); //{25,25,25,25,25}

    //Create a vector from another existing vector
    vector<int> v4(v3); // {25,25,25,25,25}

    //consider the vector v1 {10, 20, 30, 40}
    //v.begin() = returns an iterator pointing to the first element
    //Declare an iterator that points to the first element
    vector<int>::iterator it = v1.begin();

    cout << *(it); //prints 10
    it++;
    cout << *(it); //prints 20
    it = it + 2;
    cout << *(it); //prints 40

    //Elements can also be accessed using index
    cout << v1[0] << " " << v1[1]; //prints 10 20
}

void printElements()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
        v.push_back(i * 10);
    // v = {10,20,30,40,50}

    //Ways to Print all elements
    //1) Using iterator (v1.end() returns an iterator pointing to the theoretical element that follows the last element in the vector)
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    //2) Iterator can also be declared using the auto keyword
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    //3) Print using forEach loop
    for (auto it3 : v)
    {
        cout << it3 << " ";
    }

    //4) Print elements using index
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

void inputElements()
{
    vector<int> vec;
    vector<int> vec2;
    //To input elements, we can use simple loops
    //If size is known:
    int n = 5, input = 0; //assume n is size
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    //If size is unknown
    while (cin >> input) //enter any non-integer to end the loop!
    {
        vec2.push_back(input);
    }
}

void accessingElements()
{
    vector<int> v;
    for (int i = 1; i <= 10; i++)
        v.push_back(i * 10);
    //v = {10,20,30,40,50,60,70,80,90,100}

    cout << "\nReference operator [g] : v[2] = " << v[2]; //prints 30

    //at(i) Returns a reference to the element at position ‘i’ in the vector
    cout << "\nat : v.at(4) = " << v.at(4); //prints 50

    //front()  Returns a reference to the first element in the vector
    cout << "\nfront() : v.front() = " << v.front(); //prints 10

    //back() Returns a reference to the last element in the vector
    cout << "\nback() : v.back() = " << v.back(); //prints 100
}

void commonVectorFunctions()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    //v = {1,2,3,4,5}

    //size() Returns the number of elements in the vector.
    cout << "Size : " << v.size(); //prints 5

    //capacity() Returns the maximum number of elements that the vector can hold.
    cout << "\nCapacity : " << v.capacity(); //prints value depending on system

    // empty() Returns (true/false) whether the vector is empty.
    if (v.empty())
        cout << "\nVector is empty";
    else
        cout << "\nVector is not empty";

    vector<int> v1(3, 10); //{10,10,10}
    vector<int> v2(3, 15); //{15,15,15}
    //swap() swaps two vectors
    v1.swap(v2); //v1 -> {15,15,15}, v2->{10,10,10}
}

void vectorModifierFunctions()
{
    vector<int> v;

    // assign() assigns new value to the vector elements by replacing old ones
    // fill the array with 10 five times
    v.assign(5, 10); //{10,10,10,10,10}
    //insert element
    v.push_back(15); //{10,10,10,10,10,15}

    //pop_back() used to pop or remove elements from a vector from the back.
    v.pop_back(); //{10,10,10,10,10}

    //erase()  used to remove elements from a container from the specified position or range.
    //vector_name.erase(iterator position); to remove one element
    //vector_name.erase(iterator start_position, iterator end_position); to remove a range of elements
    v.erase(v.begin() + 2); //removes 2nd index element
    v.erase(v.begin() + 1, v.begin() + 3);
    //removes 1,2 index elements (note that in a range, first value is included and last excluded)

    //insert() It inserts new elements before the element at the specified position
    //vector_name.insert (position, val)
    // inserts 3 at front
    auto it = v.insert(v.begin(), 3);
    // inserts 2 at front
    v.insert(it, 2);

    int i = 2;
    // inserts 7 at i-th index
    it = v.insert(v.begin() + i, 7);

    v.clear(); //erases the entire vector
}
int main()
{
    //BasicsOfVectors();
    //printElements();
    //accessingElements();
    //inputElements();
    //commonVectorFunctions();
    //vectorModifierFunctions();
}