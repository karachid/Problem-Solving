/*
Problem : 2109. Adding Spaces to a String
Link : https://leetcode.com/problems/adding-spaces-to-a-string/description/

Problem desc : You are given a 0-indexed string s and a 0-indexed integer array spaces that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.
For example, given s = "EnjoyYourCoffee" and spaces = [5, 9], we place spaces before 'Y' and 'C', which are at indices 5 and 9 respectively. Thus, we obtain "Enjoy Your Coffee".
Return the modified string after the spaces have been added.
*/

class Solution {
public:

    string addSpaces(string s, vector<int>& spaces) {
        string result;
        result.reserve(s.size() + spaces.size()); // Reserve memory to avoid repeated allocations
        int prev = 0;

        for (int space : spaces) {
            result.append(s.begin() + prev, s.begin() + space); // Append the substring
            result.push_back(' ');                             // Add the space
            prev = space;
        }

        result.append(s.begin() + prev, s.end()); // Add the remaining part of the string
        return result;
    }
};