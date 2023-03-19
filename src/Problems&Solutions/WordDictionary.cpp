/*
Design a data structure that supports adding new words and finding if a string matches any previously added string.

Implement the WordDictionary class:

WordDictionary() Initializes the object.
void addWord(word) Adds word to the data structure, it can be matched later.
bool search(word) Returns true if there is any string in the data structure that matches word or false otherwise. word may contain dots '.' where dots can be matched with any letter.
*/

#include <bits/stdc++.h>
using namespace std;

class WordDictionary
{
private:
    set<string> str;

public:
    WordDictionary() {}
    void addWord(string word)
    {
        str.insert(word);
    }
    bool search(string word)
    {
        string w = "";
        for (char c : word)
            if (c != '.')
                w += c;
        bool exists;
        for (auto it = str.begin(); it != str.end(); it++)
        {
            exists = false;
            int i = 0;
            while (i < w.length())
            {
                for (char c : *it)
                    if (c == w[i])
                        exists = true;
                i++;
            }
        }
        return exists;
    }
};

/*class TrieNode
{
public:
    bool isOver;
    unordered_map<char, TrieNode *> map;

    TrieNode() { this->isOver = false; }
};

class WordDictionary
{
private:
    TrieNode *root;
    bool src(TrieNode *node, string word, int index)
    {
        if (index == word.length())
            return false;

        char c = word[index];

        if (c != '.')
        {
            if (node->map.find(c) == node->map.end())
                return false;
            return src(node->map[c], word, index++);
        }
        else
        {
            for (auto &n : node->map)
                if (src(n.second, word, index++))
                    return true;
        }
        return false;
    };

public:
    WordDictionary()
    {
        root = new TrieNode();
    }
    void addWord(string word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            if (node->map.find(c) == node->map.end())
                node->map[c] = new TrieNode();
            node = node->map[c];
        }
        node->isOver = true;
    }
    bool search(string word)
    {
        return src(root, word, 0);
    }
};

class TrieNode {
public:
    bool isEnd;
    unordered_map<char, TrieNode*> map;

    TrieNode() { this->isEnd = false; }
};

class WordDictionary {
private:
    TrieNode *root;

    bool searchHelper(TrieNode* node, string word, int index) {
        if (index == word.length()) {
            return node->isEnd;
        }
        char c = word[index];
        if (c != '.') {
            if (node->map.find(c) == node->map.end()) {
                return false;
            }
            return searchHelper(node->map[c], word, index + 1);
        } else {
            for (auto &p : node->map) {
                if (searchHelper(p.second, word, index + 1)) {
                    return true;
                }
            }
            return false;
        }
    }

public:
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->map.find(c) == node->map.end()) {
                node->map[c] = new TrieNode();
            }
            node = node->map[c];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        return searchHelper(root, word, 0);
    }
};*/