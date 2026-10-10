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

int digitFrequency(int wholeNumber, int repeatedNumber){

    int repetition=0;
    short remainder=0;

    while (wholeNumber>0)
    {
        remainder = wholeNumber % 10;
        wholeNumber = wholeNumber /10;
        if (remainder == repeatedNumber)
        {
            repetition++;
        }
        
    }

    return repetition;
    


}

void printResult(int repeatedNumber, int repetition){

    cout << "Digit "<< repeatedNumber <<" frequency is "<< repetition << " time(s)";

}



int main(){


    cout << "problem 8\n\n";


    int wholeNumber = readPositiveNumber("Enter a positive number: ");
    short repeatedNumber = readPositiveNumber("Enter a number you want to search: ");
    int repetition = digitFrequency(wholeNumber,repeatedNumber);
    printResult(repeatedNumber,repetition);




    return 0;
}