class Solution {
public:
   int numUniqueEmails(vector<string>& emails) {
    unordered_set<string> set;
    for(string &single : emails) {
        string temp;
        for(char ch : single) {
            if(ch == '+' || ch == '@') 
                break;
            if(ch == '.') 
                continue;
            temp += ch;
        }
        temp += single.substr(single.find('@'));
        set.insert(temp);
    }
    return set.size();
}
};
