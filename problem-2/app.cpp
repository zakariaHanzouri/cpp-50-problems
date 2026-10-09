#include <iostream>

using namespace std;

#include <math.h>


int readPositiveNumber(){

    int num;
   do
   {
    cout << "Enter a positive number: ";
    cin >> num;
   } while (num<0);

   return num;
   

}

enum enPrimeNotPrime
{
    Prime,
    NotPrime,
};

enPrimeNotPrime checkPrimeNotPrime(int num)
{

    int M = round(num/2);

    for (int i = 2; i <= M; i++)
    {
        if (num % i == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void getPrimeNumbersFrom1ToN(int num){

    int counter=1;



    cout << "Prime Numbbers from 1 to "<<num << " are: "<< endl; 

    while(counter <= num){

        if (checkPrimeNotPrime(counter) == enPrimeNotPrime::Prime )
        {
           cout << counter << endl;
        }
        counter++;
        
        

    }


}


int main()
{

    getPrimeNumbersFrom1ToN(readPositiveNumber());


    return 0;
}
