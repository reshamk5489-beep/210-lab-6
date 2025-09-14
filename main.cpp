#include <iostream>
#include <ctime>
using namespace std;

const int SIZE = 5; 

void enterArrayData(double *ptr);
void outputArrayData(double *ptr);
double sumArray(double *ptr);

int main()
{
    double *arr = new double[SIZE];
    enterArrayData(arr);
    outputArrayData(arr);
    
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