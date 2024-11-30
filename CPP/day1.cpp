
// variables,datatypes and operators

// OUTPUT STATEMENT

// it's a case sensitive language like python and non case sensitive(HTML AND SQL)

#include <iostream>
using namespace std;

int main()
{

    // to get ouput as print in python

    cout << "hello CPP \n";
    cout << "hello world" << "i'm gonna start with you" << "\n";

    // variables
    // a-z,A-Z,_, variable name should start with these, not with number
    // everytime we need to mention it's data type

    // the below are the PRIMITIVE DATATYPES

    //  INTEGER DATATYPE                 int has 4 bytes=32 bits

    int age = 22;
    // cout<<age+ "\n" <<    sizeof(age);
    cout << age << sizeof(age) << "\n";       //4

    // CHAR DATATYPE    1 byte space

    char grade = 'a';
    cout << grade << "\n";

    // FLOAT DATATYPE         4 bytes

    float PI = 3.14f;
    cout << PI << "\n";

    // BOOL   1 byte

    bool isSafe = true;
    cout << isSafe << "\n";               //1

    // double datatype    8 bytes

    double price = 100.45563;
    cout << price << "\n";

    // TYPE CASTING conversion of one data type to other

    // CONVERSION METHOD  OR IMPLICIT = automatic coversion

    char alpha = 'A';

    int value = alpha;
    cout << value << "\n"; // 65

    // CASTING and EXPLICIT

    double val1 = 100.99;
    int flt = (int)val1;

    cout << sizeof(flt) << "\n"
         << flt << '\n'; // 4,100

    // TAKING INPUT FROM USER

    // int year;                       //assign datatype and name og the variable in which you want to store
    // cout<<"what's your birth year\n";
    // cin>>year;
    // cout<<"my year is"<<year<<"\n";

    // OPERATORS

    //   ARITHMETIC OPERATOR +,-,*,/

    int b = 10, c = 15;
    cout << c + b << "\n";


// RELATIONAL OPERATORS    >=,<=,==,!=

cout<<(7>=9)<<"\n";



// LOGICAL OPERATOR    OR  ||,NOT   !, AND      &&

cout<<!(5>10)<<"\n";
cout<<((5>10) && (5>2))<<"\n";                     //both should be true
cout<<((5<10) || (3<1))<<"\n";                // if one is true it will return 1




//URINARY OPERATORS 


//post increment

// int w=9;
// int t=w++;
// cout<<"enter w  "<<w<<"\n";         //10
// cout<<"enter t  "<<t<<"\n";            //9



//pre increment
// int w=9;
// int t=++w;
// cout<<"enter w  "<<w<<"\n";         //10
// cout<<"enter t  "<<t<<"\n";            //10

// pre decrement
// int w=9;
// int t=--w;
// cout<<"enter w  "<<w<<"\n";         //8
// cout<<"enter t  "<<t<<"\n";            //8


// post decrement


// int w=9;
// int t=w--;
// cout<<"enter w  "<<w<<"\n";         //8
// cout<<"enter t  "<<t<<"\n";            //9






















    return 0;
}

// int main(){
//     cout<<"hello world"<<"i'm gonna start with you"<<"\n";
//     return 0;
// }
