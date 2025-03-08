#include <iostream>
using namespace std;
int main()
{
    // bitwise  &   = if both are equal to one than output will be 1
    int a = 8, b = 4;
    cout << (a & b) << endl;

    // bitwise |  = even if one number equal to 1 it gives 1

    cout << (a | b) << endl;

    // bitwise XOR ^ = if same numbers returns 1 different returns 0
    cout << (a ^ b) << endl;

    // biwise left shift <<  see the pointed end    ==it shifts the places to the left
    cout << (4 << 1) << endl
         << (10 << 2) << endl; // a<<b   a*2**b

    // biwise right shift >> see the pointed end    ==it shifts the places to the right    last if zero s there remove it
    cout << (8 >> 2) << endl
         << (10 >> 1) << endl; // a>>b=a/2**b





    




         return 0;
}