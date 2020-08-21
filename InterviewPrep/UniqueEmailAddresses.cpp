class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> set;
        
        for(auto email : emails){
            string address = "";
            for(int i = 0; i < email.length(); i++){
                char e = email[i];
                if(e == '.') {
                    continue;
                } else if (e == '+' || e == '@') {
                    break;
                } else {
                    address += e;
                }
            }
            address += email.substr(email.find('@'));
            set.insert(address);
        }
        
        return set.size();
    }
};
