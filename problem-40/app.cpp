#include <iostream>

using namespace std;



void addArrayElement(int arr[100], int number, int& length)
{
     length++;
     arr[length - 1] = number;
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

  return  searchIndexOfNumber(number, arr, arrayLength) != -1;
   

}

void distinctElements(int arr[100], int arr2[10],int arrayLength, int& newLength){

   
   

    for (int i = 0; i < arrayLength; i++)
    {
        
        if (!isNumberFound(arr[i],arr2,newLength))
        {
            addArrayElement(arr2,arr[i],newLength);
        }
        
        
        
    }
    

}

int main(){


    cout << "problem 40"<<endl;

    int arr[10]={10,10,10,50,50,70,70,70,70,90};

    cout << "Array 1"<< endl;

    printArray(arr,10);

    cout << endl;

    int arr2[10], newLength=0;
    distinctElements(arr,arr2,10,newLength);

    cout << "Distinct Elelments"<<endl;
    printArray(arr2,newLength);



    return 0;
}