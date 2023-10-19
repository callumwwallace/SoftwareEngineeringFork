#include <iostream>
using namespace std;

int grabArrTotVal(int arr[]) {
    int arrTot = 0;
    for (int i = 0; i < sizeof(arr); i++)
    {
        arrTot += arr[i];
    }
    return arrTot;
}

float grabArrMean(int arr[]) {
    int arrTot = grabArrTotVal(arr);
    int arrSize = sizeof(arr);
    float rMean = (float)arrTot / (float)arrSize;
    return rMean;
}

int main()
{
    //Create and initialise an array
    int nums[] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111 };

    // Write out the size
    cout << "The array nums consumed " << sizeof(nums) << " bytes." << endl;

    //We can actually calculate the length of the array as follows:
    int N = sizeof(nums) / sizeof(int);

    cout << "The array nums contains " << N << " elements of type int" << endl;

    //Write the start address (just curious)
    cout << "The start address of the array nums is " << nums << " (hex)" << endl;

    //Write out all elements of the array
    for (unsigned int n = 0; n < N; n++) {
        int next = nums[n];                                             //Read by de-referencing
        cout << "Element " << n << " of nums = " << next << endl;       //Write to terminal
    }
    int currentArrTot = grabArrTotVal(nums);
    float currentArrMean = grabArrMean(nums);
    cout << "arr total: " << currentArrTot << endl;
    cout << "arr mean: " << currentArrMean << endl;
    //Modify each element of the array
    for (unsigned int n = 0; n < N; n++) {
        int newValue = nums[n] + 1;             //Read (by de-referencing) and add one    
        nums[n] = newValue;                     //Write into the array (again, using de-referencing)
    }
    currentArrTot = grabArrTotVal(nums);
    currentArrMean = grabArrMean(nums);
    cout << "Add one...." << endl;

    //Write out all elements of the array again - shorter version this time
    for (unsigned int n = 0; n < N; n++) {
        cout << "Element " << n << " of nums = " << nums[n] << endl;
    }
    cout << "arr total: " << currentArrTot << endl;
    cout << "arr mean: " << currentArrMean << endl;


    // **************************************************************************
    // TASK 1 - calculate and display the SUM of all elements in the array nums *
    // **************************************************************************

    //Write task 1 solution here
    int64_t sum = 0L;   //Result needs to be bigger than int to avoid overflow


    // ***********************************************************************************************************************
    // TASK 2 - calculate the mean of all elements (this will be a fractional value) and display to 1 decimal place accuracy *
    // ***********************************************************************************************************************

    //Write task 2 solution here

}


