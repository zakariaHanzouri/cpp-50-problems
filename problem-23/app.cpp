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

int main(){

    srand((unsigned) time(NULL));


    cout << "problem 23\n\n";

    int arr[100],arrayLength;

    randomArraylElement(arr,arrayLength);
    printArray(arr,arrayLength);
    


    return 0;
}