//4. Write a program that uses the std::string class to generate an abbreviation from an input sentence. The program can extract the first letter of each word in the sentence and combines these first letters into a new string to form the abbreviation of the sentence. Output the abbreviation and convert it to uppercase.
//Answer :

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string text;

    cout << "Input sentence: ";
    getline(cin, text);

    string abbreviation = "";
    bool newWord = true;

    for (char c : text) {
        if (c != ' ' && newWord) {
            abbreviation += toupper(c);
            newWord = false;
        } else if (c == ' ') {
            newWord = true;
        }
    }

    cout << "Abbreviation: " << abbreviation << endl;

    return 0;
}