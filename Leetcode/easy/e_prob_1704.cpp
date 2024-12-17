/*
Problem : 1704. Determine if String Halves Are Alike
Link : https://leetcode.com/problems/determine-if-string-halves-are-alike/description/

You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
Return true if a and b are alike. Otherwise, return false.
*/
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