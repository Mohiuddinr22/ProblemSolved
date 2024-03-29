/*
A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

Implement the Trie class:

Trie() Initializes the trie object.
void insert(String word) Inserts the string word into the trie.
boolean search(String word) Returns true if the string word is in the trie (i.e., was inserted before), and false otherwise.
boolean startsWith(String prefix) Returns true if there is a previously inserted string word that has the prefix prefix, and false otherwise.


Example 1:

Input
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
Output
[null, null, true, false, true, null, true]

Explanation
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // return True
trie.search("app");     // return False
trie.startsWith("app"); // return True
trie.insert("app");
trie.search("app");     // return True
*/

#include <bits/stdc++.h>
using namespace std;

/*class Trie
{
    set<string> str;

public:
    Trie() {}

    void insert(string word){str.insert(word)};

    bool search(string word) { return str.find(word) != str.end(); }

    bool startsWith(string prefix)
    {
        auto it = str.lower_bound(prefix);
        if (it == str.end())
            return false;
        for (size_t i = 0; i < prefix.size(); i++)
            if (prefix[i] != (*it)[i])
                return false;
        return true;
    }
};*/

int main()
{
    set<string> str;
    str.insert("Hello");
    str.insert("Hi");
    str.insert("Hey");
    str.insert("Hola");
    str.insert("Whussup");
    str.insert("Yo");

    for (auto it = str.begin(); it != str.end(); it++)
    {
        cout << *it << endl;
    }
}