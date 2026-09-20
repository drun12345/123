class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> result;
        
        for (int mask = 0; mask < (1 << n); mask++) {
            string s = "";
            bool ok = true;
            
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    s += '1';
                } else {
                    s += '0';
                }
            }
            
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == '0' && s[i + 1] == '0') {
                    ok = false;
                    break;
                }
            }
            
            if (ok) {
                result.push_back(s);
            }
        }
        
        return result;
    }
};
