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


int reversedDigits(int number){
   
    int remainder = 0, reversedNumber=0;

    while (number>0)
    {
        remainder= number % 10;
        number = number / 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    return reversedNumber;
    

    
}

void printResult(int number){
    cout << "reversed number : " << number;
}

int main()
{

    cout << "problem7\n\n";

    printResult(reversedDigits(readPositiveNumber("Enter a positive number: ")));
    
    return 0;
} 
