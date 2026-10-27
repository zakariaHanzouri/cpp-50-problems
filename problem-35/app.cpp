#include <iostream>

using namespace std;

int randomNumber(int from, int to)
{

    return rand() % (to - from + 1) + from;
}

int readPositiveNumber(string msg)
{

    int num;
    do
    {
        cout << msg;
        cin >> num;

    } while (num <= 0);

    return num;
}

void storeArrayWithData(int arr[100], int arrayLength)
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
}

int searchIndexOfNumber(int number, int arr[100], int arrayLength)
{

    for (int i = 0; i < arrayLength; i++)
    {
        if (arr[i] == number)
        {

            return i;
        }
    }

    return -1;
}

bool isNumberFound(int number, int arr[100], int arrayLength){

  return  searchIndexOfNumber(number, arr, arrayLength) == 1;
   

}

int main()
{

    srand((unsigned)time(NULL));

    cout << "problem 35\n\n";

    int arr[100], arrayLength, numberToSearchFor;

    arrayLength = readPositiveNumber("How many elements you want: ");

    storeArrayWithData(arr, arrayLength);

    printArray(arr, arrayLength);

    cout << endl;

    numberToSearchFor = readPositiveNumber("Please enter a number to search for: ");

    if (! isNumberFound(numberToSearchFor, arr, arrayLength))
    {
         cout << "Number you are looking for is: " << numberToSearchFor << endl;
         cout << "The number is NOT found: -(";
    }
    else
    {
        cout << "Number you are looking for is: " << numberToSearchFor << endl;
        cout << "Yes , the number is found: -)";
    }
    

    return 0;
}