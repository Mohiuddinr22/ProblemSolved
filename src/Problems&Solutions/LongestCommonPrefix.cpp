#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    string sortStr(string str)
    {
        sort(str.begin(), str.end());
    }

public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int size = strs.size();
        for (int i = 0; i < size; i++)
            sortStr(strs[i]);

        string newStr = "";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0, k = 0; j < strs[i].size(), k < strs[i + 1].size(); j++, k++)
            {
                if (strs[i].at(j) == strs[i + 1].at(k))
                    newStr += strs[i].at(i);
                else
                    break;
            }
        }
        return newStr;
    }
};

int main()
{
}