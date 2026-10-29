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

void printArray(int arr[100], int arrayLength)
{

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
}

void storeArrayWithData(int arr[100], int number, int& length)
{
     length++;
    arr[length - 1] = number;
}

void storingOperation(int arr[100], int& length)
{

    bool addMore=true;

    do
    {

        int number= readPositiveNumber("Enter a number: ");
        storeArrayWithData(arr, number, length);
        addMore = readPositiveNumber("Do yo want to add more [0]:no | [1]:yes : ");

      } while(addMore);

   
    

}

int main()
{

    cout << "problem 36" << endl;

    int arr[100], length=0;

    storingOperation(arr,length);

    cout << endl;
    cout << "Array length: "<< length;
    cout << endl;
    printArray(arr,length);

    return 0;
}