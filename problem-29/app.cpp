#include <iostream>
#include <math.h>
using namespace std;


int randomNumber(int from, int to){
    return rand()%(to - from + 1) + from;
}

void storeDataInArray(int arr[100], int& arrayLength){

    cout << "How many elements you want: ";
    cin >> arrayLength;

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i]=randomNumber(1,100);
    }
    cout << endl;
    


}
void printArray(int arr[100], int arrayLength){

    cout << "Array elemnts: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    

}

enum enPrimeNotPrime{
    Prime=1,
    NotPrime
};

enPrimeNotPrime checkPrimeNumber(int number){

    int M = floor(number/2);

    for (int i = 2; i <= M; i++)
    {
        if (number%i==0)
        {
            return enPrimeNotPrime::NotPrime;
        }
        
    }
    return enPrimeNotPrime::Prime;


}


void copyPrimeElementsOfArray(int arr[100],int copiedArray[100], int arraylength, int& newArrayLength){

    int position = 0;

    for (int i = 0; i < arraylength; i++)
    {
        if (checkPrimeNumber(arr[i]) == enPrimeNotPrime::Prime)
        {
            copiedArray[position] = arr[i];
            position++;
        }
        
    }
  
    newArrayLength=position++;
    


}


int main(){

    srand((unsigned) time(NULL));

    cout << "problem 29\n\n";


    

    int arr[100],newArray[100], arrayLength,newLength;

    storeDataInArray(arr,arrayLength);
    
    copyPrimeElementsOfArray(arr,newArray,arrayLength,newLength);

    printArray(arr,arrayLength);
    cout << "\nArray 2 after copying prime elements: \n";
    printArray(newArray,newLength);

    return 0;
}