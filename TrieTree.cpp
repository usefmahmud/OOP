#include "TrieTree.h"
#include "TrieNode.h"

TrieTree::TrieTree() {
    root = new TrieNode();
}

void TrieTree::insert(const string &sentence) {
    TrieNode* curr = root;
    for(auto& c: sentence){
        if(!curr->next[c - 'a']){
            curr->next[c - 'a'] = new TrieNode(c);
        }
        curr = curr->next[c - 'a'];
    }
    curr->isFull = true;
}

void getAllResults(vector<string>& results, string word, TrieNode* curr, int& max){
    if(!curr || max <= 0) return;
    if(curr->isFull){
        results.push_back(word);
        --max;
    }
    for(auto& x: curr->next){
        if(x){
            getAllResults(results, word + x->val, x, max);
        }
    }
}

vector<string> TrieTree::search(const string &sentence, int maxResults) {
    vector<string> results;
    TrieNode* curr = root;
    int i = 0, n = sentence.length();
    while(i < n && curr){
        curr = curr->next[sentence[i++] - 'a'];
    }
    getAllResults(results, sentence, curr, maxResults);
    return results;
}
