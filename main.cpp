#include <iostream>
#include <ctime>
using namespace std;

// Comment #1: Define a global constant for the array size of 5 elements.
const int SIZE = 5; 

// Comment #2: Function prototypes for entering data, outputting data, and summing the array elements.
void enterArrayData(double *ptr);
void outputArrayData(double *ptr);
double sumArray(double *ptr);

int main()
{
    // Comment #3: Dynamically allocate an array of doubles and use the defined functions.
    double *arr = new double[SIZE];

    // Comment #4: Prompt the user to enter data into the array.
    enterArrayData(arr);

    // Comment #5: Output the array elements separated by spaces.
    outputArrayData(arr);
    
    // Comment #6: Calculate and display the sum of the array elements.
    cout << "Sum of values: " << sumArray(arr) << endl;

    delete [] arr;

    return 0;
}

void enterArrayData(double *ptr)
{
    cout << "Data entry for the array:" << endl;
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "    > Element #" << i << ": ";
        cin >> *(ptr + i);
    }

    cout << "Data entry complete." << endl;
}

void outputArrayData(double *ptr)
{
    cout << "Outputting array elements:";

    for (int i = 0; i < SIZE; i++)
    {
        cout << " " << *(ptr + i);
    }
    
    cout << endl;
}

double sumArray(double *ptr)
{
    double sum = 0.0;

    for (int i = 0; i < SIZE; i++)
    {
        sum += *(ptr + i);
    }

    return sum;
}