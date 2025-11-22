class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {
    }
    
    void push(int x) {
        q2.push(x);              // Step 1: push to empty q2
        
        // Step 2: Move everything from q1 → q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: Swap q1 and q2
        swap(q1, q2);
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
