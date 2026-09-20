class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i++) {
            bool placed = false;

            for (int j = 0; j < result.size(); j++) {
                bool found = false;
                for (int k = 0; k < result[j].size(); k++) {
                    if (result[j][k] == nums[i]) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    result[j].push_back(nums[i]);
                    placed = true;
                    break;
                }
            }

            if (!placed) {
                vector<int> newRow;
                newRow.push_back(nums[i]);
                result.push_back(newRow);
            }
        }

        return result;
    }
};
