#include <iostream>
using namespace std;

 //linear search   
int linearSearch(int arr[],int size,int target){
    for (int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
        
    }
    return -1;
}

//reverse array using 2 pointers
 void  reverseArray(int arr[],int size){
    int start=0, end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

}




int main(){



    //LENIAR SEARCH ALOGORITHM

    int arr[8]={45,67,98,67,43,23,56};
    int size=7; 
    int target=98;
    cout<<linearSearch(arr,size,target);

    



    //REVERSE AN ARRAY IN THE ORIGINAL FORMAT
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<linearSearch(arr,size,target);



    








    return 0;

}