#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;

        for(int i = 0 ; i < 26 ; i++) {
            children[i] = NULL;
        }

        isTerminal = false;
    }
};


class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word) {
        if(word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        // Only capital letters.
        int index = word[0] - 'A';

        // character present.
        if(root->children[index] != NULL) {
            // cout << "if me " << word[0] << endl;
            word.erase(word.begin());
            insertUtil(root->children[index], word);
        }

        // not present.
        else {
            // cout << "else me " << word[0] << endl;
            root->children[index] = new TrieNode(word[0]);
            word.erase(word.begin());
            insertUtil(root->children[index], word);
        }

    }

    void insert(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        if(word.size() == 0) {
            return root->isTerminal;
        }

        // Only capital letters.
        int index = word[0] - 'A';

        // character present.
        if(root->children[index] != NULL) {
            word.erase(word.begin());
            return searchUtil(root->children[index], word);
        }

        // not present.
        else
            return false;
        
    }

    bool search(string word) {
        return searchUtil(root, word);
    }

    void removeUtil(TrieNode* root, string word) {
        if(word.size() == 0) {
            if(root->isTerminal)
                root->isTerminal = false;

            return;
        }

        // Only capital letters.
        int index = word[0] - 'A';

        // character present.
        if(root->children[index] != NULL) {
            word.erase(word.begin());
            removeUtil(root->children[index], word);
        }

        // not present.
        else
            return;
        
    }

    void remove(string word) {
        removeUtil(root, word);
    }
    
};

int main() {
    
    Trie* root = new Trie();

    root->insert("HELLO");
    root->insert("TIME");
    root->insert("DO");
    cout << root->search("TIME") << endl;
    root->remove("TIME");
    cout << root->search("TIME") << endl;

    return 0;
}