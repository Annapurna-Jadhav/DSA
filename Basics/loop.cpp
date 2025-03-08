#include <iostream>
using namespace std;
int main(){



//WHILE loop

int n=10;
int i=0;                  //initialization
while(i<=n){               //condition
    cout<<(i*0.5)<<"\n";
    i++;                                             //updation
}




// for loop

//find the sum of odd numbers from 1 to N



int N;
int sum=0;



for ( N=1;N<=10;N=N+2){
    sum+=N;
}
cout<<"sum : "<<sum<<"\n";

int z=10;
int x=0;

for(x=0;x<=z; x++){

   cout<<x<<"\n";
}



return 0;







}