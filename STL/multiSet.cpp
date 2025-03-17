#include <iostream>
#include <set>
using namespace std;

void explainMultiSet() {
    multiset<int> ms;

    // Adding elements
    ms.insert(1);        // Adds 1 to the multiset
    ms.insert(2);        // Adds 2 to the multiset
    ms.insert(2);        // Adds another 2 to the multiset
    ms.insert(3);        // Adds 3 to the multiset

    // Display the multiset
    cout << "Multiset after insert: ";
    for (int x : ms) cout << x << " ";
    cout << endl;

    // Removing elements
    ms.erase(2);         // Removes all occurrences of 2 from the multiset

    // Display the multiset
    cout << "Multiset after erase: ";
    for (int x : ms) cout << x << " ";
    cout << endl;

    // Removing a single occurrence of an element
    ms.insert(2);        // Adds 2 to the multiset
    ms.insert(2);        // Adds another 2 to the multiset
    auto it = ms.find(2);
    if (it != ms.end()) {
        ms.erase(it);    // Removes a single occurrence of 2 from the multiset
    }

    // Display the multiset
    cout << "Multiset after erasing a single occurrence of 2: ";
    for (int x : ms) cout << x << " ";
    cout << endl;

    // Checking if an element exists
    if (ms.find(1) != ms.end()) {
        cout << "1 is in the multiset" << endl;
    } else {
        cout << "1 is not in the multiset" << endl;
    }

    // Checking if the multiset is empty
    if (ms.empty()) {
        cout << "Multiset is empty" << endl;
    } else {
        cout << "Multiset is not empty" << endl;
    }

    // Display the size of the multiset
    cout << "Size of the multiset: " << ms.size() << endl;

    // Clearing the multiset
    ms.clear();

    // Checking if the multiset is empty after clearing
    if (ms.empty()) {
        cout << "Multiset is empty after clearing" << endl;
    } else {
        cout << "Multiset is not empty after clearing" << endl;
    }

    // Using lower_bound and upper_bound
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    auto lb = ms.lower_bound(2); // Returns an iterator to the first element that is not less than 2
    if (lb != ms.end()) {
        cout << "Lower bound of 2: " << *lb << endl;
    } else {
        cout << "Lower bound of 2 not found" << endl;
    }

    auto ub = ms.upper_bound(2); // Returns an iterator to the first element that is greater than 2
    if (ub != ms.end()) {
        cout << "Upper bound of 2: " << *ub << endl;
    } else {
        cout << "Upper bound of 2 not found" << endl;
    }

    // Using equal_range
    auto range = ms.equal_range(2); // Returns a pair of iterators representing the range of elements equal to 2
    cout << "Elements equal to 2: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using swap
    multiset<int> ms1, ms2;
    ms1.insert(1);
    ms1.insert(2);
    ms2.insert(3);
    ms2.insert(4);

    cout << "Multiset ms1 before swap: ";
    for (int x : ms1) cout << x << " ";
    cout << endl;

    cout << "Multiset ms2 before swap: ";
    for (int x : ms2) cout << x << " ";
    cout << endl;

    ms1.swap(ms2); // Swap the contents of ms1 and ms2

    cout << "Multiset ms1 after swap: ";
    for (int x : ms1) cout << x << " ";
    cout << endl;

    cout << "Multiset ms2 after swap: ";
    for (int x : ms2) cout << x << " ";
    cout << endl;
}

int main() {
    explainMultiSet();
    return 0;
}