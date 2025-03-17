#include <iostream>
#include <set>
using namespace std;
// logn 

void explainSet() {
    set<int> s;

    // Adding elements
    s.insert(1);        // Adds 1 to the set
    s.insert(3);        // Adds 3 to the set
    s.insert(2);        // Adds 2 to the set
    s.emplace(5);


    // we can't use push

    // Display the set
    cout << "Set after insert: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    // Removing elements
    s.erase(5);         // Removes 5 from the set

    // Display the set
    cout << "Set after erase: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    // Checking if an element exists
    if (s.find(1) != s.end()) {
        cout << "1 is in the set" << endl;
    } else {
        cout << "1 is not in the set" << endl;
    }

    // Checking if the set is empty
    if (s.empty()) {
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }

    // Display the size of the set
    cout << "Size of the set: " << s.size() << endl;

    // Clearing the set
    s.clear();

    // Checking if the set is empty after clearing
    if (s.empty()) {
        cout << "Set is empty after clearing" << endl;
    } else {
        cout << "Set is not empty after clearing" << endl;
    }

    // Using lower_bound and upper_bound
    s.insert(1);
    s.insert(2);
    s.insert(3);
    auto it = s.lower_bound(2); // Returns an iterator to the first element that is not less than 2
    if (it != s.end()) {
        cout << "Lower bound of 2: " << *it << endl;
    } else {
        cout << "Lower bound of 2 not found" << endl;
    }

    it = s.upper_bound(2); // Returns an iterator to the first element that is greater than 2
    if (it != s.end()) {
        cout << "Upper bound of 2: " << *it << endl;
    } else {
        cout << "Upper bound of 2 not found" << endl;
    }

    // Using swap
    set<int> s1, s2;
    s1.insert(1);
    s1.insert(2);
    s2.insert(3);
    s2.insert(4);

    cout << "Set s1 before swap: ";
    for (int x : s1) cout << x << " ";
    cout << endl;

    cout << "Set s2 before swap: ";
    for (int x : s2) cout << x << " ";
    cout << endl;

    s1.swap(s2); // Swap the contents of s1 and s2

    cout << "Set s1 after swap: ";
    for (int x : s1) cout << x << " ";
    cout << endl;

    cout << "Set s2 after swap: ";
    for (int x : s2) cout << x << " ";
    cout << endl;
}

int main() {
    explainSet();
    return 0;
}