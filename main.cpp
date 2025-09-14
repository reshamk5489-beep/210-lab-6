#include <iostream>
#include <ctime>
using namespace std;

const int SIZE = 5; 

void enterArrayData(double *ptr);

int main()
{
    double *arr = new double[SIZE];
    enterArrayData(arr);

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