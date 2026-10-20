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


int getMaxNumber(int arr[100], int arrayLength){

    int maxNumber=arr[0];

    for (int i = 1; i < arrayLength; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
        
    }
    return maxNumber;
    

}

int main(){


    cout << "problem 24"<<endl <<endl;

    int arr[100], arrayLength, maxNumber;

    randomArraylElement(arr,arrayLength);
    maxNumber= getMaxNumber(arr, arrayLength);
    printArray(arr,arrayLength);
    cout << "Max number is: " << maxNumber;



    return 0;
}