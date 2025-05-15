#include <iostream>
using namespace std;


// insertion sort 
// it's based on shifting the min number to the left side 

// tc=o(n^2)
// sc=o(1) {storing temporary variable}


void iSort(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                int temporary=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temporary;
            
            }
        }
    }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    iSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}