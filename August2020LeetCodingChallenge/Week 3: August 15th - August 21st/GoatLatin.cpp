class Solution {
    string process(string word){
        vector<char> vow = {'a','e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        if(find(vow.begin(), vow.end(), word.front()) != vow.end()){
                    word += "ma";
        } else {
            char ch = word.front();
            word.erase(word.begin());
            word += ch;
            word += "ma";
        }
        return word;
    }
public:
    string toGoatLatin(string S) {
        vector<string> words;
        string word = "";
        int i = 1;
        for(auto c: S) {
            if(c == ' ') {
                words.push_back(process(word));
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(process(word));
        string sentence = "";
        for(auto sen: words) {
            sentence += sen + string(i++, 'a') + ' ';
        }
        sentence.pop_back();
        return sentence;
    }
};
