#include <iostream>
using namespace std;

int lcm(int a, int b){
    int lcm=1;
    for (int i=1; i<=max(a,b);i++){
        if(a%i==0 || b%i==0 ){
            a=a/i;
            b=b/i;
            lcm*=i;
           
        }
    }
    return lcm;

};


int main(){

    cout<<lcm(50,10);
    return 0;
}
