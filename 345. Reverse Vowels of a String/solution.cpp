// Intuition:
// The problem asks for reversing the vowels in a given string while keeping the non-vowel characters in their original positions. This can be solved by using a two-pointer approach, where one pointer starts from the beginning of the string and the other pointer starts from the end of the string. We swap vowels found by these pointers and move them towards each other until they meet.

// Approach:
// Create a helper function isvowel to determine if a character is a vowel. Convert the character to lowercase and check if it matches any of the vowel characters ('a', 'e', 'i', 'o', 'u').
// Initialize two pointers i and j. i starts at the beginning of the string and j starts at the end of the string.

// Iterate while i is less than j
// If both characters at positions i and j are vowels, swap them and increment i and decrement j.
// If only the character at position i is a vowel, decrement j.
// If only the character at position j is a vowel, increment i.
// If neither character is a vowel, increment i and decrement j.
// 4. Return the modified string
// Complexity
// Time complexity
// The while loop runs at most n/2 times (where n is the length of the input string), as the two pointers move towards each other with each iteration. The isvowel function works in constant time. Therefore, the overall time complexity is O(n), where n is the length of the input string.
// Space complexity:
// The algorithm uses a constant amount of extra space, so the space complexity is O(1).




class Solution {
public:
    bool isvowel(char ch)
    {
        ch=tolower(ch);
        if(ch=='a'||ch== 'e'|| ch=='i'|| ch=='o'|| ch=='u')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(isvowel(s[i])&&isvowel(s[j]))
            {
                cout<<s[i]<<" "<<s[j];
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
            else if(isvowel(s[i]) && !isvowel(s[j]))
            {
                j--;
            }
            else if(isvowel(s[j])&& !isvowel(s[i]))
            {
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};