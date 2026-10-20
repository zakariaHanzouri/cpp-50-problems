#include <iostream>

using namespace std;


int readPositiveNumber(string msg)
{

    int num;
    do
    {
        cout << msg << endl;
        cin >> num;
    } while (num < 0);

    return num;
}


void storeDataInArray(int numbers[], int& arrayLength ){

    cout << "Enter number of elements: ";
    cin >> arrayLength;
    
    for (int i = 0; i < arrayLength; i++)
    {
       cout << "Element ["<<i+1<<"]: ";
       cin >> numbers[i];
    }
    cout << endl;
    
   
}

int checkNumberFrequency(int numbers[],int totalNumbers,int repeatedNumber){

    int times = 0;

    for (int i = 0; i < totalNumbers; i++)
    {
        if (numbers[i] == repeatedNumber)
        {
           times += 1;
        }
        
    }
    
    return times;

}

void printArray(int arr[100], int arrayLength){

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void printResult(int numbers[], int arrayLength, int repeatedNumber, int numberOfRepetition ){

    cout << "Original array: ";
   printArray(numbers,arrayLength);

    cout << endl;
    cout << repeatedNumber << " is repeated "<< numberOfRepetition << " time(s)";
    

}

int main(){


    cout << "problem 22"<< endl << endl;

    int numbers[100], arrayLength, repeatedNumber;

    storeDataInArray(numbers,arrayLength);

    repeatedNumber = readPositiveNumber("Enter a number  you want to checkr: ");

    int numberOfRepetition= checkNumberFrequency(numbers,arrayLength,repeatedNumber);

    printResult(numbers, arrayLength,repeatedNumber,numberOfRepetition);
    

    return 0;
}