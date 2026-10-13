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

void InvertedPattern(int num) {
     for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
        
    }
}

int main(){


    cout << "problem 12"<< endl;

    int num = readPositiveNumber("Enter a positive number: ");

    InvertedPattern(num);
   
    

    return 0;
}