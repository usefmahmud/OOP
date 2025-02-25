#include "TrieTree.h"
#include "TrieNode.h"

TrieTree::TrieTree() {
    root = new TrieNode();
}

void TrieTree::insert(const string &sentence) {
    TrieNode* curr = root;
    for(auto& c: sentence){
        if(!curr->next[c]){
            curr->next[c] = new TrieNode(c);
        }
        curr = curr->next[c];
    }
    curr->isFull = true;
}

void getAllResults(vector<string>& results, const string& word, TrieNode* curr, int& max){
    if(!curr || max <= 0) return;
    if(curr->isFull){
        results.push_back(word);
        --max;
    }
    for(auto& x: curr->next){
        getAllResults(results, word + x.first, x.second, max);
    }
}

vector<string> TrieTree::search(const string &sentence, int maxResults) {
    this->history.push_back(sentence);
    vector<string> results;
    TrieNode* curr = root;
    int i = 0, n = sentence.length();
    while(i < n && curr){
        curr = curr->next[sentence[i++]];
    }
    getAllResults(results, sentence, curr, maxResults);
    return results;
}

vector<string> TrieTree::getHistory() {
    return this->history;
}
