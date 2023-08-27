// Time Complexity: The code iterates through the input string s once using two pointers i and j, where j moves ahead while i also moves to 
// maintain a window of size k. The inner isVowel function is constant time. Therefore, the time complexity of this code is O(N), 
// where N is the length of the input string s.
//  Timecomplexity=o(n)

// Space Complexity: The code uses a constant amount of extra space for variables like maxcount, count, i, and j, as well as the isVowel 
// function which uses constant space for a few comparisons. Therefore, the space complexity of this code is O(1), constant space.
// spacecomplexity=o(1)

class Solution {
public:

 int isVowel(char ch)
             {
                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                {
                    return 1;
                }
                return 0;
             }
    int maxVowels(string s, int k)
     {
        
        int maxcount=0;
        int count=0;
        int i=0;int j=0;
     
            while(j<s.size())
            {
                count=count+isVowel(s[j]);
                if(j-i+1<k)
                {
                    j++;
                }
                else if(j-i+1==k)
                {
                    maxcount=max(maxcount,count);
                    if(isVowel(s[i]))
                    {
                        count--;
                    }
                    j++;
                    i++;
                }
            }
            
        return maxcount;
    }
};