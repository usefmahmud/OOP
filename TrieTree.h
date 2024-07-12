#include <bits/stdc++.h>
#ifndef OOP_TRIETREE_H
#define OOP_TRIETREE_H
using namespace std;
class TrieTree {
    vector<int> history;
public:
    TrieTree();
    void insert(const string& sentence);
    vector<string> search(const string& sentence);
};


#endif
