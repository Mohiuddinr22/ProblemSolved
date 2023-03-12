/*
Given two arrays of strings list1 and list2, find the common strings with the least index sum.

A common string is a string that appeared in both list1 and list2.

A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings.

Return all the common strings with the least index sum. Return the answer in any order.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
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
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<pair<string, int>> ans; 
        for(int i=0; i<list1.size(); i++)
        {
            for(int j=0; j<list2.size(); j++)
            {
                if(list1[i] == list2[j]){
                    ans.push_back({list1[i], i+j});
                }
            }
        }
        sortByNum(ans);
        vector<string> strArr;
        int i =0;
        while (i < ans.size()) {
            strArr.push_back(ans[i].first);
            if (i < ans.size() - 1 && ans[i].second == ans[i + 1].second) {
                i++;
            } else {
                break;
            }
        }
        return strArr;
}
};