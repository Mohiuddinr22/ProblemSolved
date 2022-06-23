#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if (c == '^')
        return 3;

    else if (c == '/' || c == '*')
        return 2;

    else if (c == '+' || c == '-')
        return 1;

    else
        return -1;
}

string postFix(string expression)
{
    stack<char> Stack;
    string result;

    for (int i = 0; i < expression.length(); i++)
    {
        char c = expression[i];

        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
        {
            result += c;
        }
        else if (c == '(')
        {
            Stack.push(c);
        }
        else if (c == ')')
        {
            while (Stack.top() != '(')
            {
                result += Stack.top();
                Stack.pop();
            }
            Stack.pop();
        }
        else
        {
            while (!Stack.empty() && precedence(expression[i]) <= precedence(Stack.top()))
            {
                if (c == '^' && Stack.top() == '^')
                {
                    break;
                }
                else
                {
                    result += Stack.top();
                    Stack.pop();
                }
            }
            Stack.push(c);
        }
    }
    while (!Stack.empty())
    {
        result += Stack.top();
        Stack.pop();
    }

    return result;
}

int main()
{
    string expression = "a+b*(c^d-e)^(f+g*h)-i";
    cout << postFix(expression);
    return 0;
}