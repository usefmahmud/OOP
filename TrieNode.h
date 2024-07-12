#include <bits/stdc++.h>

#ifndef OOP_TRIENODE_H
#define OOP_TRIENODE_H

using namespace std;
class TrieNode {
public:
    bool isFull;
    TrieNode* next[26];
    TrieNode();
};


#endif //OOP_TRIENODE_H
