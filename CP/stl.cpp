#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>

using namespace std;

void learnpair()
{
    pair<int, int> p = {4, 5};
    cout << p.first << endl;

    pair<int, pair<char, pair<int, int>>> c = {1, {'a', {2, 3}}};
    cout << c.first << endl
         << c.second.second.first << endl
         << c.second.first << endl;

    pair<int, int> a[] = {{1, 2}, {4, 5}, {7, 8}};
    cout << a[1].second << endl
         << a[0].first << endl;
}

void learntuple()
{ // used for more than two values use
    tuple<int, int, int> p = {4, 5, 88};
    cout << get<2>(p) << endl;
}

// containers

void learnvector()
{
    vector<int> v;
    v.push_back(44);
    v.push_back(84);
    v.emplace_back(89);
    v.emplace_back(98);
    v.emplace_back(890);
    cout << size(v) << endl
         << v[2] << endl;
    cout << v.back();

    // getting vector data

    vector<int>::iterator an = v.begin();
    an += 1; // this line shifts to next element by one place
    // an++;
    cout << endl
         << *(an) << " " << endl;

    // using for loop

    for (auto an = v.begin(); an != v.end(); an++)
    {
        cout << *(an) << " ";
    }
    cout << endl;
    // erase function

    v.erase(v.begin());     // 44
    v.erase(v.begin() + 2); // 98
    // v.erase(v.begin()+1,v.begin()+3);

    v.pop_back(); // removes last one 890

    // v1.swap(v2);   //it swaps v1 with v2
    // v1.clear()   //make it empty vector

    cout<<v.empty()<<endl;

    // insert function
    v.insert(v.begin(), 25);
    v.insert(v.begin() + 2, 255);
    v.insert(v.begin() + 2, 3, 10); // adds 10 3 times

    // for each loop
    for (auto an : v)
    {
        cout << an << " ";
    }

    // like this v.end

    // array
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




//List container

void learnList(){
    list<int> ls;
    ls.push_back(2);
    ls.push_front(9);
    ls.emplace_back(8);
    ls.emplace_front(10);
    cout<<ls.front()<<endl;

    cout<<ls.back()<<endl;

    //same as vector container
}


//deque same as list container


//stack container  LIFO
void learnStack(){
    stack<int> st;
    st.push(2);
    st.emplace(26);
    st.push(2);
    st.emplace(20);
    st.push(206);
    cout<<st.top();
    st.pop();
    cout<<st.top();
    st.pop();
}

//FIFO
void learnQueue(){
    queue<int> st;
    st.push(2);
    st.emplace(26);
    st.push(2);
    st.emplace(20);
    st.push(208);
    st.back()+=2;
    cout<<st.back();   //210
    cout<<st.front();   
    st.pop();
    cout<<st.back()<<endl;   
    cout<<st.front()<<endl;   
    st.pop();
}


//priority queue  = largest integer stay at top

void learnPriorityQueue(){
    priority_queue<int> pq;
    pq.push(2);
    pq.emplace(260);
    pq.push(2);
    pq.emplace(20);
    pq.push(210);
    cout<<pq.top();    //260
}
//set container   sorted and unique
void learnset(){     
    //find ,count,earase 
    //log(n)   
    set <int> s;
    s.insert(1);
    s.emplace(4);
    s.emplace(14);
    s.insert(5);
    s.insert(10);
    s.insert(5);
    auto it=s.find(14);
    auto i=s.find(15);

    s.erase(4);



      
    // cout<<s.find(14)<<" ";


    //multiset  sorted stores multiple 


}
   


int main()
{
    // learnpair();
    // learntuple();
    // learnvector();
    // learnList();
    // learnStack();
    // learnQueue();
    learnset();
    // learnPriorityQueue();
  
    return 0;
}