#include <iostream>
#include <climits> // Include this for INT_MAX and INT_MIN
using namespace std;

int evenlyDivides(int n) {
    int count = 0;
    int original = n;
    while (n > 0) {
        int lastDigit = n % 10;
        if (lastDigit > 0 && original % lastDigit == 0) {
            count += 1;
        }
        n = n / 10;
    }
    return count;
}

int reverse(int x) {
    int reverse = 0;
    while (x != 0) {
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

bool armStrong(int n) {
    int original = n;
    int sumOfCubes = 0;
    while (n > 0) {
        int last = n % 10;
        sumOfCubes += (last * last * last);
        n = n / 10;
    }
    return sumOfCubes == original; // Check Armstrong condition
}

int nodigit(int N) {
    // if (N == 0) return 1;
    int digit = 0;
    while (N > 0) {
        digit++;
        N = N / 10;
    }
    return digit;
}

int main() {
    cout << armStrong(35) << endl;     // Should print 0 (false)
    cout << armStrong(153) << endl;    // Should print 1 (true)

    // Finding the last digit and number of digits
    int n = 3608;
    int original_n = n; // Store the original value of n
    int count = 0;
    while (n > 0) {
        int lastdigit = n % 10;
        n = n / 10;
        cout << n << " ";
        cout << lastdigit << endl;
        count += 1;
    }
    cout << count << endl;

    cout << evenlyDivides(380) << endl;
    cout << evenlyDivides(2446) << endl;

    cout << "Digits: " << nodigit(256) << endl; // Use the original value of n

    return 0;
}