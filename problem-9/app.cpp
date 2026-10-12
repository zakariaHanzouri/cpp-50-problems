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
    int remainder=0;

    while (wholeNumber> 0)
    {
        
        remainder = wholeNumber% 10;
        wholeNumber = wholeNumber/ 10;
        if (remainder == repeatedNumber)
        {
            repetition++;
        }
    
    }

    return repetition;
    

}


void printResult(int repeatedNumber, int repetition){

    cout << "Digit "<< repeatedNumber <<" frequency is "<< repetition << " time(s)"<< endl;

}

void allDigitFrequency(int wholeNumber){

    short frequency=0;

  for (int i = 0; i < 10; i++)
  {
    frequency= digitFrequency(wholeNumber,i);

    if (frequency> 0)
    {
        printResult(i, frequency);
    }
    

  }
  

}


int main(){

    cout << "problem 9\n\n";

    int wholeNumber= readPositiveNumber("Enter a positive number: ");

    allDigitFrequency(wholeNumber);


    return 0;
}