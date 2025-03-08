#include <iostream>
using namespace std;




void learnpair() {
    pair<int, int> p = {4, 5}; // Create a pair of ints.
    cout << p.first << endl; // Output first element (4).

    pair<int, pair<char, pair<int, int>>> c = {1, {'a', {2, 3}}}; // Nested pair.
    cout << c.first << endl << c.second.second.first << endl << c.second.first << endl; // Output nested elements (1 2 a).

    pair<int, int> a[] = {{1, 2}, {4, 5}, {7, 8}}; // Array of pairs.
    cout << a[1].second << endl << a[0].first << endl; // Output array pair elements (5 1).
}

int main(){
    
    learnpair();
    return 0;
}
