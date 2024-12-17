class Solution {
public:

    bool isVowel(char c) {
        static const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        return vowels.find(c) != vowels.end();
    }

    bool halvesAreAlike(string s) {
        int vowelCountLeft = 0, vowelCountRight = 0;
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (isVowel(s[left])) 
                vowelCountLeft++;
            if (isVowel(s[right])) 
                vowelCountRight++;
            left++;
            right--;
        }

        return vowelCountLeft == vowelCountRight;
    }
};