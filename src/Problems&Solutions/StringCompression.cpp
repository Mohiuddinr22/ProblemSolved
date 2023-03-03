#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        string s = "";
        int i = 0,j, size = chars.size();
        vector<char> charray;
        while(i<size)
        {
            j=i;
            while(j<size)
            {
                if(chars.at(j)==chars.at(j+1))
                {
                    s[j] = chars.at(j);
                    j++;
                }
            }
            charray.
        }
    }
};

int main()
{
    // vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    // Solution s = Solution();
    // cout << s.compress(chars);

    int val;
    cin >> val;
    while()
}