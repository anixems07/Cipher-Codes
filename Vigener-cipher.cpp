#include <iostream>
#include <string>

using namespace std;

string encrypt(string in, string key)
{
    string res = "";
    for (int i = 0, j = 0; i < in.length() && j < key.length(); i++, j++)
    {
        if (in[i] >= 'A' && in[i] <= 'Z')
        {
            res += char(int(in[i]) + int(key[j]) - 2 * 65) % 26 + 65;
            if (j == key.length()-1)
            {
                j = 0;
            }
        }
        else if (in[i] >= 'a' && in[i] <= 'z')
        {
            res += char(int(in[i]) + int(key[j]) - 2 * 97) % 26 + 97;
            if (j == key.length()-1)
            {
                j = 0;
            }
        }
        else
        {
            cout << "Enter valid text";
            break;
        }
    }
    return res;
}

int main()
{
    string text = "", key = "";
    cout << "Enter the text to be encrypted: ";
    getline(cin, text);
    cout << "Enter the key: ";
    getline(cin, key);
    cout << "Cipher text is: " << encrypt(text, key);
    return 0;
}