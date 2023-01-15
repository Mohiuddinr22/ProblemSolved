/*Given an integer x, return true if x is a palindrome, and false otherwise.*/
#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0 || (x != 0 && x % 10 == 0))
    {
        return false;
    }
    int sum = 0, num = x;
    while (num != 0)
    {
        sum = sum * 10 + num % 10;
        num /= 10;
    }
    return x == sum || x == sum / 10;
}

int main()
{
    int x;
    cout << "Enter a number which you wanna check : ";
    cin >> x;
    if (isPalindrome(x))
    {
        cout << x << " is palindrome." << endl;
    }
    else
    {
        cout << x << " is not palindrome." << endl;
    }

    return 0;
}