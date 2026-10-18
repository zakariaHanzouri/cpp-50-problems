#include <iostream>

using namespace std;


enum enType{
    SmallLetters=1,
    CapitalLetters,
    SpecialCharacters,
    Numbers
};

int randomNumber(int from, int to){

    int randomNumber = rand()%(to - from +1) + from;
    return randomNumber;

}

char randomChar(enType type){

    switch (type)
    {
    case  enType::CapitalLetters:

        return char(randomNumber(65,90));
        break;

    case  enType::SmallLetters:

        return char(randomNumber(97,122));
        break;

    case  enType::SpecialCharacters:

        return char(randomNumber(32,47));
        break;

    case  enType::Numbers:

        return char(randomNumber(48,57));
        break;
    
    }
    return '\0';
}

int main(){

    srand((unsigned)time(NULL));

    cout << "problem 20" << endl << endl;

    cout << randomChar(enType::SpecialCharacters) << endl;
    cout << randomChar(SmallLetters) << endl;
    cout << randomChar(CapitalLetters) << endl;
    cout << randomChar(Numbers)<< endl;

    cout << char('\0');


    return 0;
}