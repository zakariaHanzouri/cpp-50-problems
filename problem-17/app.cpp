#include <iostream>

using namespace std;

string readPassword(string msg)
{

    string password;

    cout << msg << endl;
    cin >> password;

    return password;
}

bool checkPassword(string password)
{

    int trials = 0;
    string word = "";

    for (int i = 65; i <= 90; i++)
    {
       
        for (int j = 65; j <= 90; j++)
        {

         

            for (int k = 65; k <= 90; k++)
            {
                trials++;
                word += char(i);
                word += char(j);
                word += char(k);

                cout << "Trial [" << trials << "]: " << word << endl;

                if (word == password)
                {
                    cout << "Password is : " << password << endl;
                    cout << "found after " << trials << " trail(s)" << endl;
                   return true;
                }

                word = "";
            }
        }
    }
    return false;
}

int main()
{

    cout << "problem 17\n\n";

    checkPassword(readPassword("Enter a password: "));

    return 0;
}