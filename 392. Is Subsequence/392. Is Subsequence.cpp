class Solution {
public:
    bool isSubsequence(string s, string t) {
       int leftLength=s.length();
       int check=leftLength-1;
       int rightLength=t.length();
       int left=0;
       int right=0;
       while(left<leftLength && right<rightLength)
       {
           if(s[left]==t[right])
           {
              
               left++;
              
           }
         right++;
       }
       return left==leftLength;
    }
};