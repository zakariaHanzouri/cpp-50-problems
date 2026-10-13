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


int reverseNumber(int number){

    int remainder=0, reversedNumber=0;

    while (number>0)
    {
        remainder = number%10;
        number /= 10;
        reversedNumber = reversedNumber* 10 + remainder;
    }

    return reversedNumber;

}

bool isPalindromNumber(int number){
    return (number == reverseNumber(number));
}


void printResult(int number ){

    if (isPalindromNumber(number))
    {
        cout << "Yes, it is a palindrom number";
    }else
    {
        cout << "No, it is NOT a palindrom number";
    }
    
    

}


int main(){

    cout << "problem 11"<< endl;

    int number = readPositiveNumber("Enter a positive number: ");
    

    printResult(number);


    return 0;
}