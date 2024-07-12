#include "TrieNode.h"

TrieNode::TrieNode(char c): isFull(false), val(c), next(26, nullptr){
}