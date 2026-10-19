#include <iostream>

using namespace std;


enum enType{
 SmallLetters=1,
    CapitalLetters,
    SpecialCharacters,
    Numbers
};

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


string generateWord(enType type,short length){

    string word="";

    for (int i = 0; i < length; i++)
    {
       word += randomChar(type);
    }

    return word;
    
}

string generateKey(){
    string key="";

    key += generateWord(enType::CapitalLetters,4) +'-';
    key += generateWord(enType::CapitalLetters,4) +'-';
    key += generateWord(enType::CapitalLetters,4) +'-';
    key += generateWord(enType::CapitalLetters,4) ;
    return key;
}

void generateKeys(int times){

    for (int i = 1; i <= times; i++)
    {
        cout << "Key ["<< i <<"] : "<< generateKey() << endl;
    }
    
}

int main(){


    srand((unsigned) time(NULL));

    cout << "problem 21" << endl << endl;

     

   generateKeys(readPositiveNumber("How many keys do you want?: "));
   

    return 0;
}