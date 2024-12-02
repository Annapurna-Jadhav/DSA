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

int sum(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
        // return sum;
    }
    return sum;
}



//Factorial calculation
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

//ncr calculation
int ncr(int a, int b){
    for(int i=1;i<a; i++){
        int n=factorial(a);
        int r= factorial(b);
        int c1=factorial(a-b);
        return n/(r*c1);
    }
}


int sum(int a, int b)
{
    a = a + 10;
    b = b + 10;
    // cout<<a+b;

    return a + b;
}



//calculate the sum of digits of a number
int digitSum(int n){
    int sumDigit=0;

    while(n>0){
     int lastDigit=n%10;
    n=n/10;
    sumDigit+=lastDigit;
    ;
    // return lastDigit;
    }
    return sumDigit;

}

// pass by value

int main()

{    sum(5,3);
    int a = 24;
    int b = 65;
    // cout << sum(a, b) << "a "<<a<<"b "<<b;
        
    cout << factorial(5) <<endl;
    cout << sum(5) << "\n";
    int val = max(9, 7, 3);
    cout << max(8, 10, 1) << " val: " << val<<endl;
    cout<<digitSum(146544)<<endl;


    cout<<ncr(8,2)<<endl;

    return 0;
}