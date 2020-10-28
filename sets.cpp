#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

void setBasics()
{
    // Sets are containers that store unique elements following a specific order.
    // In a set, all elements are unique (no duplicates)
    // In a set, all elements are automatically in sorted order

    set<int> s;  //declare a set of type int
    s.insert(1); //insert() is used for inserting elements. Time Complexity: O(logn)
    s.insert(25);
    s.insert(5);
    s.insert(10);
    s.insert(4);

    for (int x : s)
        cout << x << " "; // prints  1 4 5 10 25

    s.insert(50);
    s.insert(50);
    // Only one 50 will be added. Set does not have duplicates.
}

void setFunctions()
{
    set<int> s = {1, 4, 5, 10, 25};
    auto it = s.find(4); // find() returns an iterator pointing to the element to find. If not present, returns set.end()
    if (it == s.end())
        cout << " Not present";
    else
        cout << " present";

    auto it2 = s.lower_bound(5); //lower_bound returns the first element in set >= given element
    auto it3 = s.upper_bound(5); //upper_bound returns the first element in set > given element.
    // If not present, then returns immediate next element. Returns v.end() if element passed is maximum and not present

    // erase() can be used to remove an element at a specified position. Time Complexity: O(logn)
    s.erase(3); // removes element at position 4, ie, 10
}

int main()
{
    // setBasics();
    // setFunctions();
}