#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string ReverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

bool isPalindrome(string str) {
    str = ReverseString(str);
    if (str == str)
        return true;
    else
        return false;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
