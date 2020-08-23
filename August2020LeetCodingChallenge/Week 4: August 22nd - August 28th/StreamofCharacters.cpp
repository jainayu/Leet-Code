class Trie {
	unordered_map<char, Trie *> charMap;
	bool isEndOfWord;
public:
	Trie() {
		isEndOfWord = false;
	}

	void insert(string word) {
		if(word.length() == 0)
			return;

		Trie *temp = this;
		for(auto ch : word) {
			if(temp->charMap.find(ch) != temp->charMap.end()) {
				temp = temp->charMap[ch];
			} else {
				temp->charMap[ch] = new Trie();
				temp = temp->charMap[ch];
			}
		}

		temp->isEndOfWord = true;
	}

	bool search(string word) {
		if(word.length() == 0)
			return false;

		Trie *temp = this;
		for(auto ch : word) {
			if(temp->charMap.find(ch) == temp->charMap.end())
				return false;
			temp = temp->charMap[ch];
			if(temp->isEndOfWord)
				return true;
		}
		return temp->isEndOfWord;
	}
};

class StreamChecker {
    Trie mTrie;
	string s = "";
	int length = 0;
public:
    StreamChecker(vector<string>& words) {
        for(auto w : words) {
			reverse(w.begin(), w.end());
			length = max(length, (int)w.length());
			mTrie.insert(w);
		}
    }
    
    bool query(char letter) {
        s = letter + s;
		if(s.length() > length)
			s.pop_back();

		return mTrie.search(s);
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
