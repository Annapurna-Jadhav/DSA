#include <iostream>
#include <unordered_set>
using namespace std;


// Use std::set when you need a sorted collection of unique elements.
// Use std::multiset when you need a sorted collection that allows duplicate elements.
// Use std::unordered_set when you need a collection of unique elements with average constant-time complexity for insertions, deletions, and lookups, and the order of elements does not matter.
// N time complexity
void explainUnorderedSet() {
    unordered_set<int> us;

    // Adding elements
    us.insert(1);        // Adds 1 to the unordered set
    us.insert(2);        // Adds 2 to the unordered set
    us.insert(3);        // Adds 3 to the unordered set

    // Display the unordered set
    cout << "Unordered set after insert: ";
    for (int x : us) cout << x << " ";
    cout << endl;

    // Removing elements
    us.erase(2);         // Removes 2 from the unordered set

    // Display the unordered set
    cout << "Unordered set after erase: ";
    for (int x : us) cout << x << " ";
    cout << endl;

    // Checking if an element exists
    if (us.find(1) != us.end()) {
        cout << "1 is in the unordered set" << endl;
    } else {
        cout << "1 is not in the unordered set" << endl;
    }

    // Checking if the unordered set is empty
    if (us.empty()) {
        cout << "Unordered set is empty" << endl;
    } else {
        cout << "Unordered set is not empty" << endl;
    }

    // Display the size of the unordered set
    cout << "Size of the unordered set: " << us.size() << endl;

    // Clearing the unordered set
    us.clear();

    // Checking if the unordered set is empty after clearing
    if (us.empty()) {
        cout << "Unordered set is empty after clearing" << endl;
    } else {
        cout << "Unordered set is not empty after clearing" << endl;
    }

    // Using swap
    unordered_set<int> us1, us2;
    us1.insert(1);
    us1.insert(2);
    us2.insert(3);
    us2.insert(4);

    cout << "Unordered set us1 before swap: ";
    for (int x : us1) cout << x << " ";
    cout << endl;

    cout << "Unordered set us2 before swap: ";
    for (int x : us2) cout << x << " ";
    cout << endl;

    us1.swap(us2); // Swap the contents of us1 and us2

    cout << "Unordered set us1 after swap: ";
    for (int x : us1) cout << x << " ";
    cout << endl;

    cout << "Unordered set us2 after swap: ";
    for (int x : us2) cout << x << " ";
    cout << endl;
}

int main() {
    explainUnorderedSet();
    return 0;
}