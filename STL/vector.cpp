#include <iostream>
#include <vector> // Include the vector header
using namespace std;

void learnvector() {
    vector<int> v;
    v.push_back(44);
    v.push_back(84);
    v.emplace_back(89);
    v.emplace_back(98);
    v.emplace_back(890);

    cout << v.size() << endl; // Use v.size() instead of size(v)
    cout << v[2] << endl;
    cout << v.back() << endl; 

    // getting vector data

    vector<int>::iterator an = v.begin();
    an += 1; // this line shifts to next element by one place
    cout << endl << *(an) << endl; 

    // using for loop

    for (auto an = v.begin(); an != v.end(); an++) {
        cout << *(an) << " ";
    }
    cout << endl;

    // erase function

    v.erase(v.begin());      // 44
    v.erase(v.begin() + 2); // 98
    // v.erase(v.begin()+1,v.begin()+3);

    v.pop_back(); // removes last one 890

    // v1.swap(v2);   //it swaps v1 with v2
    // v1.clear()     //make it empty vector

    cout << v.empty() << endl;

    // insert function
    v.insert(v.begin(), 25);
    v.insert(v.begin() + 2, 255);
    v.insert(v.begin() + 2, 3, 10); // adds 10 3 times

    // for each loop
    for (auto an : v) {
        cout << an << " ";
    }
    cout << endl; // added endl for better formatting

    // like this v.end

    // array (actually vector of pairs)
    vector<pair<int, char>> v1;
    v1.push_back({1, 'b'});
    v1.emplace_back(3, 'b');
    // cout<<vec(0)<<endl;

    // define size
    vector<int> vct(3, 100);

    vector<int> v2(vct);

    // getting vector data

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 3);
}

int main() {
    learnvector();
    return 0;
}