#include <bits/stdc++.h>

#ifndef OOP_TRIENODE_H
#define OOP_TRIENODE_H

using namespace std;
class TrieNode {
public:
    char val;
    bool isFull;
    vector<TrieNode*> next;
    TrieNode(char c = 'a');
};


#endif //OOP_TRIENODE_H
