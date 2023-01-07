#include <iostream>
#include <map>
#include <vector>
using namespace std;

void roman_To_Numbers(vector<char> &R)
{
    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int int_Num = 0;

    for (int i = 0; i < R.size() - 1; ++i)
    {
        if (roman[R[i]] < roman[R[i + 1]])
        {
            int_Num -= roman[R[i]];
        }
        else
        {
            int_Num += roman[R[i]];
        }
    }
    int_Num += roman[R[R.size() - 1]];
    cout << int_Num;
}

int main()
{
    string roman;
    cout << "Enter a roman number : ";
    cin >> roman;

    vector<char> R(roman.begin(), roman.end());

    roman_To_Numbers(R);

    return 0;
}
