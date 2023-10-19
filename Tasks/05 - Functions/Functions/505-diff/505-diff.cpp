#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int calculateDifference(int x,int y);

int main()
{
    int var1, var2;

    //Prompt the user
    cout << endl << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;


    // ***1***
    // create variables to hold the reslts of the calculation
    int diff = calculateDifference(var1,var2);

    // print out the results
    cout << "Absolute diff = " << diff << endl;
}

// Simple function to subtract
// return result is u-v
int sub(int u, int v)
{
    int y = u - v;
    return y;
}

int calculateDifference(int x, int y)
{
    return (x >= y) ? (x - y) : (y - x);
}
