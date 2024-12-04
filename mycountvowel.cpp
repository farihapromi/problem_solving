#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(const string &str) {
    int count = 0;
    for (char ch : str) {
        ch = tolower(ch);  // Convert to lowercase to handle uppercase vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // To read the entire line of input

    int vowelCount = countVowels(input);
    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
