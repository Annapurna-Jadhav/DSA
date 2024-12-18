#include <iostream>
using namespace std;

int triangle(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
int startriangle(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
int abctriangle(int n){
    for (int i=0;i<n;i++){
        char ch ='A';
        for (int j=0;j<=i;j++){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}


int sametriangle(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;}


int sameabctriangle(int n){
        char ch ='A';
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<ch;
        }
        ch+=1;
        cout<<endl;
    }
    return 0;
}


//reverse triangle pattern

int reversetriangle(int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


int reverseabctriangle(int n){
        // char ch ='A';
    for (int i=0;i<n;i++){
         char ch ='A';
         
        for (int j=i;j>=0;j--){
            cout<<char(ch+j);
            
        }
        cout<<endl;
    }
    return 0;
}


//floyd's triangle


int floydtriangle(int n){
    int num=1;
    for (int i=0;i<n;i++){
        
        for (int j=0;j<=i;j++){
            cout<<num;
            num+=1;
        }
        cout<<endl;
    }
    return 0;
}

int floydabctriangle(int n){
    char ch ='a';
    for (int i=0;i<n;i++){
        
        for (int j=0;j<=i;j++){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}








int main(){
triangle(3);
startriangle(3);
abctriangle(3);



sameabctriangle(3);
sametriangle(3);


//reverse triangle
reversetriangle(3);
reverseabctriangle(3);


floydtriangle(3);
floydabctriangle(3);


    return 0;
}