class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n));

        int left = 0, right = n - 1;
        int top = 0, bottom = n - 1;
        int num = 1;

        while (left <= right && top <= bottom) {

            // 1️⃣ fill top row (left → right)
            for (int i = left; i <= right; i++)
                mat[top][i] = num++;
            top++;

            // 2️⃣ fill right column (top → bottom)
            for (int i = top; i <= bottom; i++)
                mat[i][right] = num++;
            right--;

            // 3️⃣ fill bottom row (right → left)
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    mat[bottom][i] = num++;
                bottom--;
            }

            // 4️⃣ fill left column (bottom → top)
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    mat[i][left] = num++;
                left++;
            }
        }

        return mat;
    }
};
