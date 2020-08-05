class WordDictionary {
    class Node {
    public:
        bool isEnd;
        Node* child[26];
        Node() {
            isEnd = false;
            for(int i=0;i<26;i++)
                child[i] = NULL;
        }
    };
public:
    Node* root;
    /** Initialize your data structure here. */
    WordDictionary() {
        root = new Node();
    }

    /** Adds a word into the data structure. */
    void addWord(string word) {
        Node* curr = root;
        for(int i=0;i<word.length();i++)
        {
            if(curr->child[word[i] - 'a']){
                curr = curr->child[word[i] - 'a'];
            } else {
                Node* n = new Node();
                curr->child[word[i] - 'a'] = n;
                curr = curr->child[word[i] - 'a'];
            }
        }
        curr->isEnd = true;
    }
    
   bool searchWord(Node* curr, string &word, int i)
    {
        if(i == word.length()){
            return (curr->isEnd) ? 1 : 0;
        }
        bool ans=0;   
        if(word[i] != '.')
        {
            if(!(curr->child[word[i] - 'a'])){
                return false;
            }
            return searchWord(curr->child[word[i] - 'a'], word, i+1);
        }
        else if(word[i] == '.')
        {
            for(int j=0;j<26;j++)
            {
                if(curr->child[j]){
                    ans = ans || searchWord(curr->child[j], word, i+1);
                }
            }
        }
        return ans;
    }    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return searchWord(root, word, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
