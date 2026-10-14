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


void letterPatter(int num){


    for (int i = 65; i <= (65 + num -1); i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(i);
        }
        cout << endl;
        
    }
    

}

int main(){

    cout << "problem 15"<<endl;

    
    letterPatter(readPositiveNumber("Enter a positive number: "));

    return 0;
}