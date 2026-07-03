#include <iostream>
#include <string>

using namespace std;

// This function receives text and shift and returns the encrypted output
string encrypt(string text, int s)
{
    string result = "";

    // traverse text
    for (int i = 0; i < text.length(); i++) {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);

        // Encrypt Lowercase letters
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }
    return result;
}
int main()
{
    string text="";
    cout<<"Enter the text to be encrypted(Ceaser Cipher): ";
    getline(cin,text);
    int s;
    cout<< "Enter the number of shifts: ";
    cin>> s;
    cout << "Text : " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: " << encrypt(text, s);
    return 0;
}
