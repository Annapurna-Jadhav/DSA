#include <iostream>
#include <vector>
using namespace std;

//  GCD using Euclidean algorithm
int computeGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return computeGCD(b, a % b);
}


int computeLCM(int a, int b, int gcdValue) {
    return (a / gcdValue) * b;
}


vector<int> findLCMandGCD(int a, int b) {
    vector<int> result;

    int gcdValue = computeGCD(a, b);
    int lcmValue = computeLCM(a, b, gcdValue);

    result.push_back(lcmValue);
    result.push_back(gcdValue);

    return result;
}


int main() {
    int a = 12, b = 18;
    vector<int> result = findLCMandGCD(a, b);

    cout << "LCM of " << a << " and " << b << " is: " << result[0] << endl;
    cout << "GCD of " << a << " and " << b << " is: " << result[1] << endl;

    return 0;
}
