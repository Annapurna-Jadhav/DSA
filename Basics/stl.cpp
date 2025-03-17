#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

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
 void learnMap() {

map<int,int> mpp1;
map<int,pair<int,int>>mp2;
map<pair<int,int>,int>mpp3;
map<pair<int,int>,pair<int,int>>mpp4;
mpp1 [1]=2;

mpp1.emplace(3, 1); 
mpp1.insert({2,4});
mpp3[{2,3}]=10;

for(auto it:mpp1){
cout<<it.first<<" = "<<it.second<<endl;
}
cout<<mpp1[2];
cout<<mpp1[5];     //0 or null
auto an=mpp1.find(2);
// cout<<*(an).second;


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
    learnMap();
  
    return 0;
}