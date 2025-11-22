class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string& t : tokens) {
            // If it's an operator
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if (t == "+") st.push(a + b);
                else if (t == "-") st.push(a - b);
                else if (t == "*") st.push(a * b);
                else st.push(a / b); // integer division

            } else {
                // It's a number
                st.push(stoi(t));
            }
        }

        return st.top();
    }
};
