#include "TrieNode.h"

TrieNode::TrieNode(): isFull(false){
    for(auto& x: next){
        x = NULL;
    }
}