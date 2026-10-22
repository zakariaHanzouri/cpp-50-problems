#include <iostream>

using namespace std;

int readPositiveNumber(string msg)
{

    int num;
    do
    {
        cout << msg;
        cin >> num;
    } while (num < 0);

    return num;
}

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void storeDataInArray(int arr[100], int arrayLength)
{

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[100], int arrayLength)
{

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void sum2Arrays(int arr1[100], int arr2[100], int newArray[100], int arrayLength)
{

    for (int i = 0; i < arrayLength; i++)
    {
        newArray[i] = arr1[i] + arr2[i];
    }
}

int main()
{

    srand((unsigned)time(NULL));

    cout << "problem 30" << endl;

    int arr1[100], arr2[100], sumArr[100], arrayLength;

    arrayLength = readPositiveNumber("How many elements you want: ");

    storeDataInArray(arr1, arrayLength);
    storeDataInArray(arr2, arrayLength);

    cout << "\nElements of array 1: " << endl;
    printArray(arr1, arrayLength);

    cout << "\nElements of array 2: " << endl;
    printArray(arr2, arrayLength);

    sum2Arrays(arr1, arr2, sumArr, arrayLength);
    
    cout << "\nSum of 2 arrays: " << endl;
    printArray(sumArr, arrayLength);

    return 0;
}