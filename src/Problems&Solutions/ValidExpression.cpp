/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    class stack
    {
    public:
        vector<char> exp;
        void push(char c) { this->exp.push_back(c); }
        void pop() { this->exp.pop_back(); }
        char top() { return this->exp.back(); }
        bool empty() { return this->exp.empty(); }
    };

public:
    bool isValid(string s)
    {
        stack stack;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                stack.push(c);
            else
            {
                if (stack.empty())
                    return false;
                char t = stack.top();
                if ((c == ')' && t == '(') || (c == '}' && t == '{') || (c == ']' && t == '['))
                    stack.pop();
                else
                    return false;
            }
        }
        return stack.empty();
    }
};