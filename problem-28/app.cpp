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

void copyArray(int arr[100],int copiedArray[100], int arraylength){

    for (int i = 0; i < arraylength; i++)
    {
        copiedArray[i] = arr[i];
    }
    


}


int main(){

    srand((unsigned) time(NULL));

    cout << "problem 28\n\n";


    int arr[100],newArray[100], arrayLength;

    storeDataInArray(arr,arrayLength);
    
    copyArray(arr,newArray,arrayLength);

    printArray(arr,arrayLength);
    cout << "\nArray 2 after copying elements: \n";
    printArray(newArray,arrayLength);

    return 0;
}