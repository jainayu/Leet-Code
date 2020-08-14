class CombinationIterator {
public:
    vector <string> combinations;
    int idx;
    void allCombinations (string s, int l, string temp ="", int start = 0) {
        if (temp.size() == l) {
            combinations.push_back(temp);
            return;
        }
        for (int i = start; i < s.size(); i++) {
            allCombinations(s, l, temp + s[i], i + 1);
        }
    }
    CombinationIterator(string characters, int combinationLength) {
        allCombinations(characters, combinationLength);
        idx = 0;
    }
    
    string next() {
        return combinations[idx++];
    }
    
    bool hasNext() {
        return !(idx == combinations.size());
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
