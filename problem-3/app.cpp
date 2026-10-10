#include <iostream>

using namespace std;



int readPositiveNumber()
{

    int num;
    do
    {
        cout << "Enter a positive number: ";
        cin >> num;
    } while (num < 0);

    return num;
}

bool checkPerfectNumber(int number)
{


    int sum=0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }

        
    }

    return sum == number;
    
}

void printPerfectNumberOrNotPerfet(int number)
{

    if (checkPerfectNumber(number))
    {
        cout << number << " is a perfect number ";
    }else{
        cout << number <<" is NOT a perfect number";
    }
    
    
}

int main()
{
    
    printPerfectNumberOrNotPerfet(readPositiveNumber());

    return 0;
}