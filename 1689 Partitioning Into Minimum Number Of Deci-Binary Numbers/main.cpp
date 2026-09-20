class Solution {
public:
    int minPartitions(string n) {
        int answer = 0;

        for (int i = 0; i < n.size(); i++) {
            int digit = n[i] - '0';
            if (digit > answer) {
                answer = digit;
            }
        }

        return answer;
    }
};
