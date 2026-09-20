class Solution {
public:
    int maxDistinct(string s) {
        int seen[26] = {0};
        int answer = 0;

        for (int i = 0; i < s.size(); i++) {
            int index = s[i] - 'a';
            if (seen[index] == 0) {
                seen[index] = 1;
                answer++;
            }
        }

        return answer;
    }
};
