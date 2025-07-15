class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int v : asteroids) {
            if (v > 0) {
                st.push(v);
            }
            else {
                while (!st.empty() && st.top() > 0 && abs(v) > st.top()) {
                    st.pop();
                }

                if (st.empty() || st.top() < 0) {
                    st.push(v);  // সংঘর্ষের পর বেঁচে গেলে push
                }
                else if (abs(v) == st.top()) {
                    st.pop();  // সমান হলে উভয় মরে
                }
                // else: stack.top() > abs(v), so v destroyed → কিছুই করার দরকার নেই
            }
        }

        vector<int> ans;
        while (!st.empty()) {
            int v = st.top();
            st.pop();
            ans.push_back(v);
        }
        reverse(ans.begin(), ans.end());  // অর্ডার ঠিক রাখার জন্য
        return ans;
    }
};
