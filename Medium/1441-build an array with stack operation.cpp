// Complexity
// Time complexity:
// Time complexity of this code will be O(n), since this have only one loop and it will run till n loops or till its reaches maximum size
// Space complexity:
// The space complexity of this code is O(n), where 'n' is the number of operations added to the result vector.
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector<string>result;
        int maxSize=target.size();
        int pointerTarget=0;
        for(int i=1;i<=n;i++)
        {
            result.push_back("Push");
            if(target[pointerTarget]!=i)
            {
                result.push_back("Pop");
            }
            else
            {
                if(pointerTarget==maxSize-1)
                {
                    break;
                }
                else
                {
                    pointerTarget++;
                }
            }
        }
        return result;
      
    }
};