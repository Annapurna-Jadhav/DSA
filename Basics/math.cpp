#include <iostream>
#include <stdbool.h>
using namespace std;

int evenlyDivides(int n)
{
    // Geeks for geeks
    //      Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

    // A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
    // Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

    int count = 0;
    int original = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit > 0 && original % lastDigit == 0)
        {

            count += 1;
        }
        n = n / 10;
    }
    return count;
};

int reverse(int x)
{
    // Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

    // Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

    // CHALLENGING is to control overflow and underflow

    if (x >= INT_MIN && x <= INT_MAX)
    {
        int reverse = 0;
        while (x != 0)
        {
            int last = x % 10;
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && last > 7))
                return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && last < -8))
                return 0;
            reverse = (reverse * 10) + last;
            x = x / 10;
        }
        return reverse;
    }
    else
    {
        return 0;
    }
};
int armStrong(int n)
{
    int original = n;
    int sumOfCubes = 0;
    while (n > 0)
    {
        int last = n % 10;
        sumOfCubes += (last * last * last);
        n = n / 10;
    }
    return sumOfCubes;
}


int main()
{
    cout << armStrong(35) <<endl;
    cout << armStrong(1634) <<endl;

    // finding the last digit and number of digits
    int n = 3608;
    int count = 0;
    int i = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        cout << n << " ";
        cout << lastdigit << endl;
        count += 1;
    }
    cout << count;

    cout << evenlyDivides(380);
    cout << evenlyDivides(2446);
    return 0;
}