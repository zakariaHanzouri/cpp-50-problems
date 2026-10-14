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

void InvertedLetterPattern(int num)
{
    for (int i = (64 + num); i >= 65; i--)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{

    cout << "problem 14\n\n";
    InvertedLetterPattern(readPositiveNumber("Enter a positive number: "));
    return 0;
}