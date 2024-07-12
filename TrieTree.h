#include <bits/stdc++.h>
#include "TrieNode.h"
#ifndef OOP_TRIETREE_H
#define OOP_TRIETREE_H
using namespace std;
class TrieTree {
    vector<string> history;
public:
    TrieNode* root;
    TrieTree();
    void insert(const string& sentence);
    vector<string> search(const string& sentence, int maxResults);
    vector<string> getHistory();
};


#endif
