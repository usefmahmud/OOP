#include "TrieTree.h"
#include "TrieNode.h"

TrieTree::TrieTree() {
    TrieNode* root = new TrieNode();
}

void TrieTree::insert(const string &sentence) {
    TrieNode* curr = root;
    for(auto& c: sentence){
        if(!curr->next[c - 'a']){
            curr->next[c - 'a'] = new TrieNode();
        }
        curr = curr->next[c - 'a'];
    }
    curr->isFull = true;
}

vector<string> TrieTree::search(const string &sentence, const int& maxResults) {

}
