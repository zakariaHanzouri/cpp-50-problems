#include <iostream>

using namespace std;


void swap(int& A, int& B){

    int temp;
    temp = A;
    A= B;
    B = temp;
}

int randomNumber(int from, int to){

    return rand()%(to - from +1) + from;

}

int readPositiveNumber(string msg){

    int num;
    do
    {
        cout << msg;
        cin >> num;

    } while (num <= 0);
    
    return num;

}

void storeArrayWithData(int arr[100], int arrayLength){

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] =randomNumber(1,100);
    }
    

}

void printArray(int arr[100], int arrayLength){

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    


}

void reverseArray(int arr[100], int arrayLength){
   
    for (int i = 0; i < arrayLength/2; i++)
    {
        swap(arr[i],arr[(arrayLength - 1 -i)]);
    }
    

}

int main(){

    srand((unsigned) time(NULL));

    cout << "problem 32\n\n";

    int arr[100], arrayLength;
    arrayLength =  readPositiveNumber("How many elements you want: ");

    storeArrayWithData(arr,arrayLength);
    printArray(arr,arrayLength);
    cout << endl << "After reversing"<< endl;
    reverseArray(arr, arrayLength);
    printArray(arr,arrayLength);
    return 0;
}