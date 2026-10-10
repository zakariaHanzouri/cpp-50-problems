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


void printNumbersInReversedOrder(int number){

    int remainder=0;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        cout << remainder << endl;
    }
    
    
    

}


int main(){


 
    
    cout << "Problem 5"<< endl;

    printNumbersInReversedOrder(readPositiveNumber("Enter a positive number: "));
    

    return 0;
}