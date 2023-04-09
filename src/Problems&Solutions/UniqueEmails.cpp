/*
Every valid email consists of a local name and a domain name, separated by the '@' sign. Besides lowercase letters, the email may contain one or more '.' or '+'.

For example, in "alice@leetcode.com", "alice" is the local name, and "leetcode.com" is the domain name.
If you add periods '.' between some characters in the local name part of an email address, mail sent there will be forwarded to the same address without dots in the local name. Note that this rule does not apply to domain names.

For example, "alice.z@leetcode.com" and "alicez@leetcode.com" forward to the same email address.
If you add a plus '+' in the local name, everything after the first plus sign will be ignored. This allows certain emails to be filtered. Note that this rule does not apply to domain names.

For example, "m.y+name@email.com" will be forwarded to "my@email.com".
It is possible to use both of these rules at the same time.

Given an array of strings emails where we send one email to each emails[i], return the number of different addresses that actually receive mails.

Example 1:

Input: emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
Output: 2
Explanation: "testemail@leetcode.com" and "testemail@lee.tcode.com" actually receive mails.

Example 2:

Input: emails = ["a@leetcode.com","b@leetcode.com","c@leetcode.com"]
Output: 3
*/

#include <bits/stdc++.h>
using namespace std;

int indexL(string &email)
{
    for (int i = 0; i < email.length(); i++)
        if (email[i] == '@')
            return i - 1;
    return -1;
}

string polishEmail(string &email)
{
    int n = indexL(email);
    for (int i = 0; i <= n; i++)
    {
        while (email[i] == '.')
            email.erase(i, 1);
        if (email[i] == '+')
        {
            email.erase(i, indexL(email) - i + 1);
            break;
        }
    }
    return email;
}
bool exists(vector<string> &strings, string str)
{
    for (int i = 0; i < strings.size(); i++)
        if (strings[i] == str)
            return true;
    return false;
}

int numUniqueEmails(vector<string> &emails)
{
    vector<string> mails;
    for (int i = 0; i < emails.size(); i++)
    {
        string str = polishEmail(emails[i]);
        if (!exists(mails, str))
            mails.push_back(str);
    }
    return mails.size();
}

int main()
{
    string str = "....m.o......h....i.u...d.d...i.n....r.22+Iamahotguy....@gmail.com";
    cout << polishEmail(str);
}