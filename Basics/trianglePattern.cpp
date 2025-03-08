#include <iostream>
using namespace std;
int main()
{

    // triangle pattern
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        // cout<<ch;
        cout << endl;
    }
    cout << ch << endl;

    int y = 5;
    for (int i = 0; i < y; i++)
    {
        char hc = 65 + i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << hc << " ";
            // ch++;
        }
        // ch++;
        // cout<<ch;
        cout << endl;
    }

    // REVERSE TRIANGLE

    int s = 4;
    for (int i = 1; i <= s; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << "\n";
    }

    // floyd's triangle pattern
    int no=1;
    int t = 4;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j<i; j++)
        {
            cout <<no;
            no++;
        }
        cout << "\n";
    }

    // inverted triangle pattern

    int nu = 1;
    int w = 3;
    for (int i = 0; i < w; i++)
    {   //space
        for (int j= 0; j<i; j++)
        {
            cout << " ";
        }

        //nums
        for (int j = 0; j < w - i; j++)
        {
            cout << i + 1<<" ";
        }
        cout << endl;
    }




    //pyramid pattern

int d=4;
for (int i=0;i<d;i++){
    //spaces
    for(int j=0;j<=d-i-1;j++){
    cout<<" ";
    }
    for (int j=1;j<=i+1;j++){
        cout<<j;
    }
    for(int j=i;j>0;j--){
        cout<<j;
    }
    cout<<"\n";
}








    return 0;
}