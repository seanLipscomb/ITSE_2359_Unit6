#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    int myArray[5];
    int * dynamArray = new int[5];

    dynamArray[0] = 10;
    dynamArray[1] = 20;
    dynamArray[2] = 30;
    dynamArray[3] = 40;
    dynamArray[4] = 50;

    int * newArray = new int[10];
    for (int i = 0; i<5; i++){
        newArray[i] = dynamArray[i];
    }
    delete[] dynamArray;
    dynamArray = newArray;
    */

    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int* userArray = new int [size];

    for (int i = 0; i<size; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> userArray[i];
    }

    return 0;
}