#include <iostream>
#include <list>
using namespace std;

void learnList() {
    list<int> ls;

    // Adding elements
    ls.push_back(2);        // Adds 2 to the end
    ls.push_front(9);       // Adds 9 to the front
    ls.emplace_back(20);    // Adds 20 to the end

    // Display the list
    cout << "List after push_back, push_front, and emplace_back: ";
    for (int x : ls) cout << x << " ";
    cout << endl;

    // Removing elements
    ls.pop_back();          // Removes the last element
    ls.pop_front();         // Removes the first element

    // Display the list
    cout << "List after pop_back and pop_front: ";
    for (int x : ls) cout << x << " ";
    cout << endl;

    // Inserting elements
    auto it = ls.begin();
    advance(it, 1);         // Move iterator to the second position
    ls.insert(it, 15);      // Insert 15 at the second position

    // Display the list
    cout << "List after insert: ";
    for (int x : ls) cout << x << " ";
    cout << endl;

    // Erasing elements
    it = ls.begin();
    advance(it, 1);         // Move iterator to the second position
    ls.erase(it);           // Erase the element at the second position

    // Display the list
    cout << "List after erase: ";
    for (int x : ls) cout << x << " ";
    cout << endl;

    // Other methods
    ls.push_back(5);
    ls.push_back(10);
    ls.push_back(15);

    cout << "Size of the list: " << ls.size() << endl;
    cout << "First element: " << ls.front() << endl;
    cout << "Last element: " << ls.back() << endl;

    ls.clear();             // Clears the list
    cout << "Size of the list after clear: " << ls.size() << endl;
}

int main() {
    learnList();
    return 0;
}