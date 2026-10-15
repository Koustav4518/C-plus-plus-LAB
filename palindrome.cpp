#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, original, reverse = 0, digit;
    string str, rev = "";

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        cout << "Number is Palindrome" << endl;
    else
        cout << "Number is not Palindrome" << endl;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev = rev + str[i];
    }

    if (str == rev)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is not Palindrome" << endl;

    return 0;
}
