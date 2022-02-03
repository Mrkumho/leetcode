/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Map Sum Pairs.
Memory Usage: 8.3 MB, less than 24.35% of C++ online submissions for Map Sum Pairs.*/

class TrieNode{
public:    
    vector<TrieNode*> dict;
    bool isEnd;
    int value;
    TrieNode(){
        dict.resize(26,nullptr);
        isEnd = false;
        value = 0;
    }
};

class MapSum {
    TrieNode* node;
    int res;
public:
    MapSum() {
        node = new TrieNode();
        int res = 0;
    }
    
    void insert(string key, int val) {
        TrieNode* cur = node;
        for(int i = 0 ; i < key.size(); i++)
        {
            if(cur->dict[key.at(i) - 'a'] == nullptr) cur->dict[key.at(i) - 'a'] = new TrieNode();
            cur = cur->dict[key.at(i) - 'a'];
        }
        cur->value = val;
        cur->isEnd = true;
    }
    
    int sum(string prefix) {
        res = 0;
        TrieNode* cur = node;
        for(int i = 0; i < prefix.size(); i++)
        {
            if(cur->dict[prefix.at(i) - 'a'] == nullptr) return 0;
            cur = cur->dict[prefix.at(i) - 'a'];
        }
        dfs(cur);
        return res;
    }
    
    void dfs(TrieNode* cur) {
        if(cur == nullptr) return;       
        if(cur->isEnd) res += cur->value;
        for(int i = 0; i<26; i++) {
            if(cur->dict[i] != nullptr) dfs(cur->dict[i]);
        }        
        return;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */