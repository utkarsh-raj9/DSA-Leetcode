class Solution {
public:
    char findTheDifference(string s, string t) {
        int sascii = 0;
        int tascii = 0;

        for(int i = 0; i<s.size();i++){
             sascii += s[i];
        }

        for(int i = 0; i < t.length(); i++) {
            tascii += t[i];
        }

        return char(tascii - sascii);
    
        
    }
};