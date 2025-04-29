class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false; // negative number can't be palindrome
    
            string s = to_string(x);  // convert number to string
            int left = 0, right = s.size() - 1;
    
            while (left < right) {
                if (s[left] != s[right]) return false;
                left++;
                right--;
            }
    
            return true;
        }
    };
    