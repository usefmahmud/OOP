#include <bits/stdc++.h>

#ifndef OOP_TRIENODE_H
#define OOP_TRIENODE_H

using namespace std;
class TrieNode {
public:
    char val;
    bool isFull;
    unordered_map<char, TrieNode*> next;
    TrieNode();
    TrieNode(char c);
};


#endif //OOP_TRIENODE_H
