#include <iostream>

using namespace std;

int randomNumber(int from , int to){

    return rand()%(to-from + 1) + from;

}

void randomArraylElement(int arr[100], int& arrayLength){

    cout << "Enter the number of elements you want: ";
    cin >> arrayLength;

    for (int i = 0; i < arrayLength; i++)
    {
       arr[i] = randomNumber(1,100);
    }


}


void printArray(int arr[100], int arrayLength){

    cout << "Array elemetents: ";

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    

}


int getMinNumber(int arr[100], int arrayLength){

    int minNumber = arr[0];

    for (int i = 1; i < arrayLength; i++)
    {
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
        
    }
    return minNumber;

}

int main(){


    cout << "problem 25\n" << endl;

    int arr[100], arrayLength, minNumber;

    randomArraylElement(arr, arrayLength);
    printArray(arr, arrayLength);
    minNumber = getMinNumber(arr, arrayLength);
    cout << "Min number is: "<< minNumber;


    return 0;
}