class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {

        int co = 0, n = colors.size();
        bool isaltered = true;

        for (size_t i = 0; i < k- 1; i++) {
            if (colors[i] == colors[i + 1])
                isaltered = false;
        }

        if (isaltered)
            co++;
        for (int i = 1; i < n; i++) {
            int removed = colors[i - 1];
            int adding = colors.at((i + k - 1) % n);
            if (isaltered) {
                if (removed == colors[i] || colors[(i + k - 2) % n] == adding) {
                    isaltered = false;
                }
            } else {
                isaltered = true;
                for (int j = i; j < i + k - 1; j++) {
                    if (colors[j % n] == colors[(j + 1) % n]) {
                        isaltered = false;
                        break;
                    }
                }
            }

            if (isaltered)
                co++;
        }
        return co;
    }
};
