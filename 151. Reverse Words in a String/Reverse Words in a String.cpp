// The first loop iterates over each character in the input string s. It goes through the string once, so the time complexity of this loop is O(n).

// Within the loop, it checks for spaces or the end of the string to identify words. The check for spaces or the end of the string takes constant time, O(1).

// When it finds a word, it pushes it onto the stack. Pushing an element onto a stack takes constant time, O(1).

// The second loop iterates over each word in the stack (the words extracted from the input string). It goes through the stack, which contains at most n/2 words (considering all spaces or non-space characters as separate words). Thus, the time complexity of this loop is O(n).

// Within the loop, it performs concatenation and some checks (like adding a space between words) which also take constant time, O(1).

// Since both loops and other operations within the loops are linear in terms of the input size n, the overall time complexity of the reverseWords function is O(n).

class Solution {
public:
    string reverseWords(string s) {
    stack<string>words;
    string spewords="";
    string finalwrd;
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]==' '||i==s.length())
        {
            if(spewords!="")
            {  words.push(spewords);
            spewords="";
            }
            else
            {
                continue;
            }
        }
        else
        {
            spewords+=s[i];
        }
    }
    while(!words.empty())
    {
        string wrd=words.top();
        
        if(wrd!=" ")
                {
                    finalwrd=finalwrd+wrd;

                }
             
        words.pop();

         if (!words.empty()) {
                finalwrd += " ";
            }
           
    }
    return finalwrd;
    }
};