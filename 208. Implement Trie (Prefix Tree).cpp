
/*
Runtime: 72 ms, faster than 65.57% of C++ online submissions for Implement Trie (Prefix Tree).
Memory Usage: 48.4 MB, less than 20.82% of C++ online submissions for Implement Trie (Prefix Tree).
01/30/2022 12:41	Accepted	72 ms	48.4 MB	cpp
*/
class TrieNode {
public:
    vector<TrieNode*> dict;
    bool isEnd;
    TrieNode()
    {
        dict.resize(26,nullptr);
        isEnd =false;
    }
};
class Trie {
    TrieNode* node;
public:
    Trie() {
        node = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur = node;
        for(int i= 0; i< word.size(); i++)
        {
            if(cur->dict[word.at(i) - 'a'] == nullptr) cur->dict[word.at(i) - 'a'] = new TrieNode();
            cur = cur->dict[word.at(i) - 'a'];
        }
        cur->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* cur = node;
        for(int i = 0; i< word.size(); i++)
        {
            if(cur->dict[word.at(i) - 'a'] == nullptr) return false;
            cur = cur->dict[word.at(i) - 'a'];
        }
        return cur->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = node;
        for(int i = 0; i<prefix.size(); i++)
        {
            if(cur->dict[prefix.at(i) - 'a'] == nullptr) return false;
            cur = cur->dict[prefix.at(i) - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */