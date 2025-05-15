#include <iostream>
using namespace std;
// Bubble sort


// it's ,ain task is to push the largest element to the end of the array

// tc- worst case =o(n^2)
// best it can be n by optimizinfg the code



void bSort(int arr[],int n){
    for (int i=0; i<=n-i;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temporary=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temporary;
            }
        }
    }

}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    };
    bSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
