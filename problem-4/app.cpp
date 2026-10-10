#include <iostream>

using namespace std;

int readPositiveNumber(string msg)
{

    int num;
    do
    {
        cout << msg;
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


void getAllPerfectNumbersFrom1ToN(int number){

    for (int i = 1; i <= number; i++)
    {
        if (checkPerfectNumber(i))
        {
            cout << i << endl;
        }
        
    }
    

}

int main(){


    cout << "problem 4 \n\n";


    getAllPerfectNumbersFrom1ToN(readPositiveNumber());

    return 0;
}