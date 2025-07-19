class Solution {
public:
    string decodeString(string s) {
        stack<int> Numst;
        stack<char> Chst;
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');  // পুরো সংখ্যা তৈরি করছি
            }
            else if (c == '[') {
                Numst.push(num);
                num = 0;
                Chst.push(c);
            }
            else if (c == ']') {
                // Step 1: extract string inside brackets
                string temp = "";
                while (!Chst.empty() && Chst.top() != '[') {
                    temp = Chst.top() + temp;
                    Chst.pop();
                }

                // Step 2: pop '['
                if (!Chst.empty() && Chst.top() == '[') {
                    Chst.pop();
                }

                // Step 3: pop number and repeat string
                int repeat = Numst.top(); Numst.pop();

                string repeated = "";
                for (int i = 0; i < repeat; ++i) {
                    repeated += temp;
                }

                // Step 4: push back characters to Chst
                for (char ch : repeated) {
                    Chst.push(ch);
                }
            }
            else {
                Chst.push(c);  // any normal character
            }
        }

        // Final answer
        string ans = "";
        while (!Chst.empty()) {
            ans = Chst.top() + ans;
            Chst.pop();
        }

        return ans;
    }
};
