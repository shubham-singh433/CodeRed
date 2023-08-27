// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

// You are given an array of strings sentences, where each sentences[i] represents a single sentence.

// Return the maximum number of words that appear in a single sentence.

 

// Example 1:

// Input: sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
// Output: 6
// Explanation: 
// - The first sentence, "alice and bob love leetcode", has 5 words in total.
// - The second sentence, "i think so too", has 4 words in total.
// - The third sentence, "this is great thanks very much", has 6 words in total.
// Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.
// Example 2:

// Input: sentences = ["please wait", "continue to fight", "continue to win"]
// Output: 3
// Explanation: It is possible that multiple sentences contain the same number of words. 
// In this example, the second and third sentences (underlined) have the same number of words.

// Solution
// Time Complexity: O(n^2)
// Space Complexity: O(n)

class Solution {
public:
    int helper(string s)
    {
        int space_cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(isspace(s[i]))   // isspace checks whether it is space or not and return true or false
                space_cnt++;
        }
        return space_cnt;
    }
    int mostWordsFound(vector<string>& sentences) {
       int count=0;
        for(int i=0;i<sentences.size();i++)
            {
            
            count=max(count,helper(sentences[i]));
             }
        return count+1;
    }
}; 