#include <iostream>
using namespace std;
 int sumOfSeries(int n) {
        int sum=0;
        if(n<1){
            return sum;
        }else{
        // code here
        
        sum=n*n*n + sumOfSeries(n-1);
    } return sum;}
int main(){
     int result = sumOfSeries(5);
    cout << "Sum of series: " << result << endl;


return 0;
}