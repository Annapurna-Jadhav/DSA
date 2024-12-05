// same type, contiguous in memory,linear

#include <iostream>
using namespace std;
int main(){
    int marks[5]={-34,56,78,-96};
    int price[]={234,456,789};

    //modify the array
    marks[4]=-58;

    //access array data

    cout<<marks[4]<<endl<<sizeof(price)<<endl<<sizeof(marks)<<endl<<marks[6]<<endl<<price[6]<<endl<<"hii";   // 96,  12,  20
    cout<<marks[-1];   //we get garbage values
    int size= sizeof(marks)/sizeof(int);

    for(int i=0;i<size; i++) {
        cout<<marks[i]<<" "<< i<<endl;
    }


    //find largest number in an array


    
    int mark=INT_MIN;
    for(int i=0; i<size;i++){
       // int mark=0;
        if (marks[i]>mark){
           mark=marks[i];
        }
    
    }


    //smallest number

    int mini=INT_MAX;
    int i=0;

    for(int  i=0;i<size;i++){
        mini=min(marks[i],mini);
        cout<<i<<"....."<<endl;
        // break;
        // cout<<i<<" "<<mini;
        
        
        
        
    }

    cout<<(mark)<<endl<<endl;
    cout<<mini<<endl;


   


    






    return 0;
}