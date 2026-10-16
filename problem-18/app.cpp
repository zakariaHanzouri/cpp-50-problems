#include <iostream>
#include <string>
using namespace std;

string readText()
{

    string text;
    cout << "Enter your text: ";
    getline(cin,text);

    return text;
}

string EncryptedText(string Text, int encryptionKey)
{

    string encryptedText = "";

    for (int i = 0; i < Text.length(); i++)
    {
        encryptedText += char( (int) Text[i] + encryptionKey );
    }

    return encryptedText;
}

string DecryptedText(string encryptedText,  int encryptionKey){

    string decryptedText="";

    for (int i = 0; i < encryptedText.length(); i++)
    {
       
       
        decryptedText += char( (int) encryptedText[i] - encryptionKey );
       
       
    }
    return decryptedText;
    

}

int main()
{

    cout << "problem 18" << endl<< endl;

    const short EncryptionKey=2;

    string text = readText();
    string encyrptedText= EncryptedText(text,EncryptionKey);
    string decryptedText= DecryptedText(encyrptedText,EncryptionKey);

    cout << "Text before Ecryption: "<< text << endl;
    cout << "Text After Encryption: "<< encyrptedText<< endl;
    cout << "Text After Decryption: "<< decryptedText<< endl;
  
    
    return 0;
}