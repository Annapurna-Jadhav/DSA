#include <iostream>
using namespace std;

//print name five times
void name(int i ,int n){
    if(i>n){
        return;
    }
    cout<<"annapurna"<<endl;
    name(i+1,n);

}

void reversePrint(int i ,int n){
    if(i>n){
        return;
    }
    cout<<n-i+1<<endl;
    reversePrint(i+1,n);


}

//backtracking
void backreversePrint(int i ,int n){
    if(i<1){
        return;
    }
    backreversePrint(i-1,n);
    cout<<i<<endl;


}

//n to 1 backtracking see the cout statement changes
void nbackreversePrint(int i, int n) {
    if (i < 1) {
        return;
    }
    cout << i << endl;
    nbackreversePrint(i - 1, n);
}

int main(){
    name(1,5);
    reversePrint(2,5);
    backreversePrint(5,5);
    nbackreversePrint(5,5);

return 0;
}