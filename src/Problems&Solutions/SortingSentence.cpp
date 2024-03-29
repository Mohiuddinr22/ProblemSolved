/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution1
{
private:
    bool compare(const pair<string, int> &a, const pair<string, int> &b)
    {
        return a.second < b.second;
    }

public:
    string sortSentence(string s)
    {
        vector<pair<string, int>> pairs;
        string word;
        int num;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
                word += s[i];
            else if (isdigit(s[i]))
            {
                num = s[i] - '0';
                while (isdigit(s[i + 1]) && i + 1 < s.length())
                {
                    num = num * 10 + (s[i + 1] - '0');
                    i++;
                }
                pairs.push_back({word, num});
                word.clear();
            }
        }
        sort(pairs.begin(), pairs.end(), compare);
        string ans = "";
        for (size_t i = 0; i < pairs.size(); i++)
        {
            ans += pairs[i].first;
            if (i != pairs.size() - 1)
            {
                ans += ' ';
            }
        }
        return ans;
    }
};
class Solution2
{
private:
    void sortByNum(vector<pair<string, int>> &pairs)
    {
        int i, j, k;
        for (i = 0; i < pairs.size() - 1; i++)
        {
            k = i;
            for (j = i + 1; j < pairs.size(); j++)
            {
                if (pairs[j].second < pairs[k].second)
                {
                    k = j;
                }
            }
            if (i != k)
                swap(pairs[i], pairs[k]);
        }
    }

public:
    string sortSentence(string s)
    {
        vector<pair<string, int>> pairs;
        string word;
        int num;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
                word += s[i];
            else if (isdigit(s[i]))
            {
                num = s[i] - '0';
                while (isdigit(s[i + 1]) && i + 1 < s.length())
                {
                    num = num * 10 + (s[i + 1] - '0');
                }
                pairs.push_back({word, num});
                word.clear();
            }
        }
        sortByNum(pairs);
        string ans = "";
        for (size_t i = 0; i < pairs.size(); i++)
        {
            ans += pairs[i].first;
            if (i != pairs.size() - 1)
                ans += ' ';
        }
        return ans;
    }
};

int main() {}