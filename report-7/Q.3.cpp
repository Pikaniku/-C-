//3. Write a C++ program that uses the std::string class to count the number of words in an English sentence entered by the user. The program analyzes the entered sentence and counts the number of words it contains. Finally, it outputs the counted number of words.
//Answer :

#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;

    cout << "Enter an English sentence: ";
    getline(cin, sentence);

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ' && inWord == false) {
            wordCount++;
            inWord = true;
        } else if (sentence[i] == ' ') {
            inWord = false;
        }
    }

    cout << "The sentence contains " << wordCount << " words." << endl;

    return 0;
}