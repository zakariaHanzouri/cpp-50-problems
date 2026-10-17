#include <iostream>

using namespace std;

int randomElement(int from, int to){

    int randomNumber= rand()%(to - from + 1) + from;
    return randomNumber;
}

int main(){

   srand((unsigned) time(NULL) );

    cout << "problem 19\n\n";

    cout << randomElement(1,20) << endl;
    cout << randomElement(1,20) << endl;
    cout << randomElement(1,20) << endl;

    

    return 0;
}