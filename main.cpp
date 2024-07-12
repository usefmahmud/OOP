#include <bits/stdc++.h>
#include "TrieTree.h"
using namespace std;

void start(TrieTree* searchSuggestion){
    cout<<"choose an action to proceed the app:\n1) insert search sentences.\n2) search about some word.\n";
    int choice; cin>>choice;
    if(choice == 1){
        cout<<"how many sentence you want to insert?";
        int insertionCount; cin>>insertionCount;
        cin.ignore();
        for(int i = 1; i <= insertionCount; i++){
            cout<<"enter sentence number "<<i<<":";
            string sentence;
            getline(cin, sentence);
            searchSuggestion->insert(sentence);
        }
        start(searchSuggestion);
    }else if(choice == 2){
        cout<<"enter the search word:";
        string searchWord; cin>>searchWord;
        auto results = searchSuggestion->search(searchWord, 10);
        if(results.empty()){
            cout<<"there is no results with this keyword.\n";
            start(searchSuggestion);
        }else{
            for(auto& result: results){
                cout<<result<<endl;
            }
            cout<<"want to search again?";
            int again; cin>>again;
            if(again){
                start(searchSuggestion);
            }else{
                return;
            }
        }
    }else{
        start(searchSuggestion);
    }
}

int main() {
    TrieTree* searchSuggestion = new TrieTree();
    cout<<"Welcome To Search Box.\n";
    start(searchSuggestion);
    return 0;
}
