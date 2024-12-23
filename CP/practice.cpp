#include <iostream>
using namespace std;
int main(){



// string s1,s2;
// cin>>s1>>s2;
// cout<<"str   "<<s1;



//                        //it gives only one thing as output
// getline(cin,s1);
// cout<<s1<<s2;



// SWITCH CASE to print days

int initial=5;
// cin>>initial;
switch (initial)
{
case 1:
    cout<<"monday";
    break;
case 2:
cout<<"tuesday";
break;
case 3:
cout<<"wednesday";
break;
case 4:
cout<<"thursday";
break;
case 5 :
cout<<"friday";
break;
case 6 :
cout<<"saturday";
break;
case 7:
cout<<"sunday";



}



//in order to take pass by refernece and override the given value type "&"  in front of the variable

//arrays will always go by pass by reference

return 0;
}