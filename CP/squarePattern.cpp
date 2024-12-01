#include <iostream>
using namespace std;
int main()
{
    Square pattern

    same number of rows containing same numbers in a row example if n =3 it will give 3*3 matrix with 123,123,123 in each differ line

    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    // if z=3 it will return a b c in three differnt rows

    int z = 9;
    for (int i = 0; i < z; i++)
    {
        char ch = 'a';
        for (int j = 0; j < z; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }

    // square pattern with continue the numbers not resetting

    int x = 3;
    int num = 1;
    for (int i = 0; i < x; i++)
    {

        // int num=1;                      //check by both and see the differnce
        for (int j = 0; j < x; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    cout << num << "\n";

    int A = 3;
    char hc = 65; // char hc='A'     check by this one too
    for (int i = 0; i < A; i++)
    {

        // char hc='A';                      //check by both and see the differnce
        for (int j = 0; j < A; j++)
        {
            cout << hc << " ";
            hc++;
        }
        cout << "\n";
    }
    cout << num;

    // int n=3;
    // int num=9;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<num;
    //         num--;
    //     }
    //     cout<<"\n";
    // }
    

    return 0;
}