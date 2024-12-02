#include <iostream>
using namespace std;

// decimal to binary

int bin(int n)
{

    int pow = 1;
    int binary = 0;
    while (n > 0)
    {
        int r = n % 2;
        n = n / 2;

        // int ans = r * pow;//
        // binary += ans;//
        binary += r * pow;
        pow = pow * 10;
    }
 return binary;
}




//binary to decimal

int dec(int n){
    int deci=0;
    int pow=1;
    while(n>0){
     int rem=n%10;
     n=n/10;
     deci=deci+(rem*pow);
     pow=pow*2;

    }
    return deci;


}
int main()
{

    cout << bin(10)<<endl<<dec(101);

    return 0;
}
