#include <iostream>
using namespace std;
// Selection sort implementation

// it's basically based on min between the selected element and the rest of the array
void sSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int minIndex=i;
        for(int j=i+1; j<=n-1;j++){
            if(arr[j]<arr[minIndex]){
                 cout<<"before min"<<arr[minIndex]<<endl;
                minIndex=j;
                
                cout<<"after min"<<arr[minIndex]<<endl;
            }
            cout<<j<<endl;
        }
        if(minIndex!=i){
        cout<<"before swap"<<arr[i]<<" "<<arr[minIndex]<<endl;
            int temporary=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temporary;

        }
        
    }
    

    
}

// tc=0(n^2) 
// sc=0(1)  {storing temporary variable}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}