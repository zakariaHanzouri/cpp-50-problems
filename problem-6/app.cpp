#include <iostream>

using namespace  std;

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


int sumAllDigits(int number){
    int remainder=0, sum=0;

    while (number >0)
    {
        remainder = number % 10;
        sum += remainder;
        number = number / 10;
    }
    
    return sum;

}

void printSum(int sum){
    cout << "Sum of all digits = " << sum;
}


int main ()
{

    cout << "problem 6\n\n";


    printSum(sumAllDigits(readPositiveNumber("Enter a positive number: ")));


    return 0;
} 