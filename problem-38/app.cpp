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

enum enOddOrEven{
    Odd=1,
    Even
};

enOddOrEven checkOddOrEven(int number){

    if (number%2==0)
    {
        return enOddOrEven::Even;
    }
    return enOddOrEven::Odd;
    

}

void copyOddNumber(int arr[100], int OddArr[100], int arrayLength, int& newLength){

    for (int i = 0; i < arrayLength; i++)
    {
        if (checkOddOrEven(arr[i]) == enOddOrEven::Odd)
        {
            addArrayElement(OddArr,arr[i],newLength);
        }
        
    }
    

}


int main(){

    srand((unsigned) time(NULL));

    cout << "problem 38"<<endl;

    int arr[100], arrayLength, oddArr[100], newLength=0;

    arrayLength= readPositiveNumber("How many elements you want to generate: ");
    storeArrayWithData(arr, arrayLength);
    cout << "Array 1:"<< endl;
    printArray(arr,arrayLength);
    cout << endl;
    copyOddNumber(arr,oddArr,arrayLength,newLength);
   cout << "Odd Array :"<< endl;
    printArray(oddArr,newLength);

    return 0;

}