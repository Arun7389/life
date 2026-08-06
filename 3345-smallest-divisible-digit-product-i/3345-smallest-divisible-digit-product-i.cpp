class Solution {
public:
    int smallestNumber(int n, int t) {

        for (int j = n; j <= 100; j++) {
            int i = j;

            int r = 1;

            while (i) {
                r *= i % 10;
                i /= 10;
            }

            if (r % t == 0) {
                return j;
            }
        }
        return 1;
    }
};