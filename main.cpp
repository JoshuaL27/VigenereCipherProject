#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Encrypt function
string vigenereEncrypt(const string& plaintext, const string& keyword) {
    string ciphertext = "";
    int keyIndex = 0;

    for (char c : plaintext) {
        if (isalpha(c)) {
            int p = toupper(c) - 'A';
            int k = toupper(keyword[keyIndex % keyword.length()]) - 'A';

            char encryptedChar = (p + k) % 26 + 'A';
            ciphertext += encryptedChar;

            keyIndex++;
        } else {
            ciphertext += c;
        }
    }

    return ciphertext;
}

// Decrypt function
string vigenereDecrypt(const string& ciphertext, const string& keyword) {
    string plaintext = "";
    int keyIndex = 0;

    for (char c : ciphertext) {
        if (isalpha(c)) {
            int cVal = toupper(c) - 'A';
            int k = toupper(keyword[keyIndex % keyword.length()]) - 'A';

            // Reverse Vigenère formula
            char decryptedChar = (cVal - k + 26) % 26 + 'A';
            plaintext += decryptedChar;

            keyIndex++;
        } else {
            plaintext += c;
        }
    }

    return plaintext;
}

int main() {
    string plaintext;
    string keyword;

    cout << "Enter Plaintext (uppercase): ";
    cin >> plaintext;

    cout << "Enter Keyword (uppercase): ";
    cin >> keyword;

    string ciphertext = vigenereEncrypt(plaintext, keyword);
    cout << "Ciphertext: " << ciphertext << endl;

    string decryptedText = vigenereDecrypt(ciphertext, keyword);
    cout << "Decrypted text: " << decryptedText << endl;

    return 0;
}
