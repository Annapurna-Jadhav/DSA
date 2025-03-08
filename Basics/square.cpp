#include <iostream>
using namespace std;

int square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}

int starSquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
int abc(int n)
{
    for (int i = 0; i < n; i++)
    {char ch ='A';
        for (int j =n-1 ; j >=0; j--)
        {
            cout <<char(65+j);
            // cout <<char(ch+j);
            // cout <<ch;
            // ch=ch+1;
        }
        cout << endl;
    }
    return 0;
}

//increasing square patterns


int incSquare(int n)
{   int num =1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<num;
            num+=1;
        }
        cout << endl;
    }
    return 0;
}



int incabc(int n)
{    char ch='a';
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j<n; j++)
        {
            // cout <<char(65+j);
            // cout <<char(ch+j);
            cout <<ch;
            ch=ch+1;
        }
        cout << endl;
    }
    return 0;
}






int main()
{
    square(5);
    char str;
//normal square pattern
    square(4);
    starSquare(4);
    abc(6);

    //increasing square pattern

    incSquare(3);
    incabc(3);
    return 0;
};
