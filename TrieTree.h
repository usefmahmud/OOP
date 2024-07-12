#include <bits/stdc++.h>
#include "TrieNode.h"
#ifndef OOP_TRIETREE_H
#define OOP_TRIETREE_H
using namespace std;
class TrieTree {
    vector<int> history;
    TrieNode* root;
public:
    TrieTree();
    void insert(const string& sentence);
    vector<string> search(const string& sentence, const int& maxResults);
};


#endif
