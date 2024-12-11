// same type, contiguous in memory,linear
// if we define an array inside the main function it can take maximum size 10*6 and if didn't define those it may give us garbage values.
// if we define it globally it's max size can go upto 10**7 and it gives 0 as values if anything is not defined

#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {34, 56, 78, 96, 96};
    int price[] = {234, 456, 789};

    // modify the array
    // marks[4] = -58;

    // access array data

    // cout << marks[4] << endl
    //      << sizeof(price) << endl
    //      << sizeof(marks) << endl
    //      << marks[6] << endl
    //      << price[6] << endl
    //      << "hii";     // 96,  12,  20
    // cout << marks[-1]; // we get garbage values
    int size = sizeof(marks) / sizeof(int);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << " " << i << endl;
    // }

    // find largest number in an array

    int mark = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // int mark=0;
        if (marks[i] > mark)
        {
            mark = marks[i];
        }
    }
    cout << mark << endl;

    // second largest number in an array

    // int size=5;
    int secondLargest = INT_MIN;
    int largest = marks[0];
    for (int i = 0; i < size; i++)
    {
        if (marks[i] > largest)
        {
            secondLargest = largest;
            largest = marks[i];
        }
    }
    cout << secondLargest << endl;

    // smallest number

    int mini = INT_MAX;
    int i = 0;

    for (int i = 0; i < size; i++)
    {
        mini = min(marks[i], mini);
        cout << i << "....." << endl;
        // break;
        // cout<<i<<" "<<mini;
    }

    // SECOND SMALLEST

   // int marks[5] = {34, 56, 78, 96, 96};

    // int secondSmall = INT_MAX;
    // int small = marks[0];
    // for (int i = 0; i < size; i++)
    // {
    //     if (marks[i]>small)
    //     {
    //         secondSmall = marks[i];
    //         small =small;
    //     }
    //     else if(marks[i]!=secondSmall && marks[i]<secondSmall){
    //         secondSmall=marks[i];
    //     }
    // }
    // cout << secondSmall;

    return 0;
}