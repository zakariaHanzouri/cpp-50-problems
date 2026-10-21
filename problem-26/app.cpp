#include <iostream>

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

int sumOfArrayElements(int arr[100], int arrayLength){


    int sum = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        sum += arr[i];
    }
    
    return sum;

}


int main(){

    srand((unsigned) time(NULL));

    cout << "problem 26\n\n";

    int arr[100], arrayLength;

    storeDataInArray(arr,arrayLength);
    printArray(arr, arrayLength);
    cout << endl;
    cout << "Sum : " << sumOfArrayElements(arr, arrayLength);

    return 0;
}