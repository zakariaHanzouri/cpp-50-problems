#include <iostream>
#include <math.h>
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

enum enPrimeNotPrime{
    Prime=1,
    NotPrime
};

enPrimeNotPrime checkPrimeNotPrime(int number){

   int M = round(number/2);

   for (int i = 2; i < M; i++)
   {
        if (number%i==0)
        {
            return enPrimeNotPrime::NotPrime;
        }
        
   }
   return enPrimeNotPrime::Prime;
   
    

}

void copyOddNumber(int arr[100], int primeArr[100], int arrayLength, int& newLength){

    for (int i = 0; i < arrayLength; i++)
    {
        if (checkPrimeNotPrime(arr[i]) == enPrimeNotPrime::Prime)
        {
            addArrayElement(primeArr,arr[i],newLength);
        }
        
    }
    

}


int main(){

    srand((unsigned) time(NULL));

    cout << "problem 39"<<endl;

    int arr[100], arrayLength, primeArr[100], newLength=0;

    arrayLength= readPositiveNumber("How many elements you want to generate: ");
    storeArrayWithData(arr, arrayLength);
    cout << "Array 1:"<< endl;
    printArray(arr,arrayLength);
    cout << endl;
    copyOddNumber(arr,primeArr,arrayLength,newLength);
   cout << "Prime Array :"<< endl;
    printArray(primeArr,newLength);

    return 0;

}