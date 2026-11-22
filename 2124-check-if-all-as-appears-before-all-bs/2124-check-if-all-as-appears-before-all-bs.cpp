class Solution {
public:
    bool checkString(string s) {
        int t=0;
        for (char c : s)
        {
            if(c=='b')
            {
                t++;
            }
            if(t!=0 && c=='a')
            {
                return false;
            }
        }
        return true;
    }
};