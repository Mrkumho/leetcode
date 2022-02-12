/*Runtime: 148 ms, faster than 67.28% of C++ online submissions for Word Ladder.
Memory Usage: 13.7 MB, less than 85.14% of C++ online submissions for Word Ladder.*/

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(),wordList.end());
        if(!wordSet.count(endWord)) return 0;
        
        queue<string> q;
        q.push(beginWord);
        int count = 1;
        
        while(!q.empty())
        {
            int len = q.size();
            for(int i = 0; i< len; i++)
            {
                string temp = q.front();
                q.pop();
                int lenS = temp.size();
                for(int j = 0; j< lenS; j++)
                {   
                    string curr = temp;   
                    for(char k = 'a' ; k <= 'z'; k++)
                    {
                        curr[j] = k;
                        if(curr == temp) continue;
                        if(curr== endWord) return ++count;
                        if(wordSet.count(curr))
                        {
                            q.push(curr);
                            wordSet.erase(curr);
                        }
                    }
                }
            }
            count++;
        }
        
        return 0;
    }
};