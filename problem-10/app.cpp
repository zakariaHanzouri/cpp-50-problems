#include <iostream>
// #include <string>

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



int reversedNumber(int wholeNumber){

    int remainder=0, reversedNumber=0;

    while (wholeNumber>0)
    {
        remainder=wholeNumber%10;
        wholeNumber /= 10;
        reversedNumber = reversedNumber*10 +remainder;
    }
    
    return reversedNumber;

}


void printDigits(int reversedNumber){

    int remainder=0;
    while (reversedNumber > 0)
    {
        remainder = reversedNumber%10;
        reversedNumber = reversedNumber/ 10;
        cout << remainder << endl;
    }
    

}

int main(){



    cout << "problem 10\n\n";

    printDigits(reversedNumber(readPositiveNumber("Enter a positive number: ")));
  

    return 0;
}