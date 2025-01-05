#include <iostream>
#include <vector>
using namespace std;

void learnpair(){                     
   pair<int,int> p={4,5}; 
   cout<<p.first<<endl;

   pair<int, pair<char,pair<int,int>>> c={1,{'a',{2,3}}};
   cout<<c.first<<endl<<c.second.second.first<<endl<<c.second.first<<endl;

   pair<int,int> a[]={{1,2},{4,5},{7,8}};
   cout<<a[1].second<<endl<<a[0].first<<endl;
}



void learntuple(){                      //used for more than two values use
   tuple<int,int,int> p={4,5,88}; 
   cout<<get<2>(p)<<endl;
}

//containers

void learnvector(){
    vector <int> v;
    v.push_back(44);
    v.push_back(84);
    v.emplace_back(89);
    cout<<sizeof(v)<<endl<<v[2];

//array
    vector <pair<int,char>> vec;
    vec.push_back({1,'b'});
    vec.emplace_back(3,'b');
    // cout<<vec(0)<<endl;

    // define size
    vector <int> vct(3,100);



    vector<int> v1(vct);


    //getting vector data

    vector<int>:: iterator an=v.begin();
    // an++;   //this line shifts to next element by one place
    cout<<endl<<*(an)<<endl;
    

}




int main(){
    // learnpair();
    // learntuple();
    learnvector();

return 0;
}