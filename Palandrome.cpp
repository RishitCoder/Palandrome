#include <iostream>
#include <string>
using namespace std;

class Palindrome
{
    string s;

public:
    void read();
    void checkPalindrome();
};

void Palindrome::read()
{
    cout << "Enter a Palandrome" << endl;
    cin >> s;
}

void Palindrome::checkPalindrome()
{
    int i = 0;
    for (int j = s.length() - 1; i < s.length() / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            cout << "Not a palandrome" << endl;
            break;
        }
    }
    if (i == s.length() / 2)
    {
        cout << "Yes , it is a Palandrome" << endl;
    }
};
int main()
{

    Palindrome w; /// = new Palindrome();

    w.read();

    w.checkPalindrome();

    return 0;
}