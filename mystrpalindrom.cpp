#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int len;
    bool flag = false;

    cout << "Enter a string: ";
    cin >> str;

    len = strlen(str);

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = true;
            break;
        }
    }

    if(flag) {
        cout << str << " is not a palindrome." << endl;
    } else {
        cout << str << " is a palindrome." << endl;
    }

    return 0;
}
