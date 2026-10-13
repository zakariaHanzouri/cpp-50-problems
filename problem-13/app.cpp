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

void InvertedPatteern(int num){
    cout << endl;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
        
    }
    

}

int main(){

    cout << "problem 13\n";

    
    InvertedPatteern(readPositiveNumber("Enter positive number: "));

    return 0;
}