#include <iostream>
using namespace std;
int main()
{

    // conditional statements

    // if else
    int n;
    cout << "enter your number: ";
    cin >> n;
    if (n > 0){
        cout<<"positive number\n ";
    } 
    else
    {
        cout << "negative number\n";
    }


  //if else if else

  char z;
  cout<<"enter your char: ";
  cin>> z;
  if (z >='a' && z <='z'){
    cout<<"lowercase\n";

  }
  else if(z>='A' && z<='Z'){
    cout<<"uppercase\n";

  }
  else{
    cout<<"other cahracter\n";
  }



  //ternary conditions

  int age=45;
  cout<<((age>=18)?"she can marry":"she can't marry");

    return 0;
}


