#include <iostream>
#include <map>
using namespace std;

void explainMap() {
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;

    // Adding elements
    mpp[1] = 2;        // Adds key 1 with value 2
    mpp[2] = 3;        // Adds key 2 with value 3
    mpp.insert({3, 4}); // Adds key 3 with value 4

    // Display the map
    cout << "Map after insert: ";
    for (auto it : mpp) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << endl;

    // Accessing elements
    cout << "Value for key 1: " << mpp[1] << endl;

    // Removing elements
    mpp.erase(2);      // Removes the element with key 2

    // Display the map
    cout << "Map after erase: ";
    for (auto it : mpp) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << endl;

    // Checking if an element exists
    if (mpp.find(1) != mpp.end()) {
        cout << "Key 1 is in the map" << endl;
    } else {
        cout << "Key 1 is not in the map" << endl;
    }

    // Checking if the map is empty
    if (mpp.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    // Display the size of the map
    cout << "Size of the map: " << mpp.size() << endl;

    // Clearing the map
    mpp.clear();

    // Checking if the map is empty after clearing
    if (mpp.empty()) {
        cout << "Map is empty after clearing" << endl;
    } else {
        cout << "Map is not empty after clearing" << endl;
    }

    // Using lower_bound and upper_bound
    mpp[1] = 2;
    mpp[2] = 3;
    mpp[3] = 4;
    auto lb = mpp.lower_bound(2); // Returns an iterator to the first element that is not less than 2
    if (lb != mpp.end()) {
        cout << "Lower bound of 2: {" << lb->first << ", " << lb->second << "}" << endl;
    } else {
        cout << "Lower bound of 2 not found" << endl;
    }

    auto ub = mpp.upper_bound(2); // Returns an iterator to the first element that is greater than 2
    if (ub != mpp.end()) {
        cout << "Upper bound of 2: {" << ub->first << ", " << ub->second << "}" << endl;
    } else {
        cout << "Upper bound of 2 not found" << endl;
    }

    // Using swap
    map<int, int> mpp1, mpp3;
    mpp1[1] = 2;
    mpp1[2] = 3;
    mpp3[3] = 4;
    mpp3[4] = 5;

    cout << "Map mpp1 before swap: ";
    for (auto it : mpp1) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << endl;

    cout << "Map mpp3 before swap: ";
    for (auto it : mpp3) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << endl;

    mpp1.swap(mpp3); // Swap the contents of mpp1 and mpp3

    cout << "Map mpp1 after swap: ";
    for (auto it : mpp1) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << endl;

    cout << "Map mpp3 after swap: ";
    for (auto it : mpp3) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << endl;
}

int main() {
    explainMap();
    return 0;
}