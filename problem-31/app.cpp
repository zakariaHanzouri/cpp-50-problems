#include <iostream>

using namespace std;

void swaap(int& A, int& B){

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
        arr[i] = i+1;
    }
    

}

void shuffle(int arr[100], int arrayLength){

  
    
    for (int i = 0; i < arrayLength; i++)
    {
      swap(arr[randomNumber(1,arrayLength)-1],arr[randomNumber(1,arrayLength)-1]  );
    }
    
    
    

}

void printArray(int arr[100], int arrayLength){

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    


}


int main(){

    srand((unsigned) time(NULL));

    cout << "problem 31" << endl;


    int arr[100], arrayLength;

    arrayLength = readPositiveNumber("How many elments you want?: ");

    storeArrayWithData(arr,arrayLength);

    printArray(arr, arrayLength);
    
    shuffle(arr,arrayLength);
    
    cout << endl;

    printArray(arr, arrayLength);

   
    

    return 0;
}