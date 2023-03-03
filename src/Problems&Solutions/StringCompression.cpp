/*Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

---------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0, j, k = 0, sizeCount = 0, size = chars.size();
        if (size < 2)
            return size;

        while (i < size)
        {
            int charCount = 0;
            j = i;
            while (j < size)
            {
                if (chars[i] == chars[j])
                {
                    charCount++;
                    j++;
                }
                else
                {
                    break;
                }
            }
            if (charCount == 1)
                chars[k++] = chars[i];
            else
            {
                string s = to_string(charCount);
                sizeCount += s.length() + 1;
                if (sizeCount > size)
                {
                    break;
                }
                chars[k++] = chars[i];
                for (auto ch : s)
                    chars[k++] = ch;
            }
            i = j;
        }
        for (int i = 0; i < k; i++)
            cout << "'" << chars.at(i) << "'"
                 << "\t";

        cout << endl;
        return k;
    }
};

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c', 'd', 'd', 't', 't', 't', 't', 't', 't', 't', 't', 't', 't', 't', 't', 't', 'y', 'y', 'y'};
    for (auto characters : chars)
        cout << "'" << characters << "'"
             << "\t";

    cout << endl;
    Solution s = Solution();
    cout << s.compress(chars);
}