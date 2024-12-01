#include <iostream>
using namespace std;

// max of three numbers
int max(int a, int b, int c)
{
    if (a > b && a >> c)
    {
        return a;
    }
    // break;
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int val = max(9, 7, 3);
    cout << max(8, 10, 1) << " val: " << val;

    return 0;
}