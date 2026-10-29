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


int randomNumber(int from, int to){
    return rand()%(to - from + 1) + from;
}

void storeArrayWithData(int arr[100], int arrayLength)
{

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] = randomNumber(1, 100);
    }
}

void addArrayElement(int arr[100], int number, int& length)
{
     length++;
     arr[length - 1] = number;
}


void copyToNewArray(int arr[100],int newArr[100],int arrayLength, int& newLength){


    for (int i = 0; i < arrayLength; i++)
    {
        addArrayElement(newArr,arr[i],newLength);
    }
    



}


int main(){

    srand((unsigned) time(NULL));

    cout << "problem 37"<<endl;

    int arr[100], arrayLength, newArr[100], newLength=0;

    arrayLength= readPositiveNumber("How many elements you want to generate: ");
    storeArrayWithData(arr, arrayLength);
    cout << "Array 1:"<< endl;
    printArray(arr,arrayLength);
    cout << endl;
    copyToNewArray(arr,newArr,arrayLength,newLength);
    cout << "Array 2 After copying:"<< endl;
    printArray(newArr,arrayLength);

    return 0;

}