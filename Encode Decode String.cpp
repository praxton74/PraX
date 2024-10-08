class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string sE="";
        for(int i=0;i<strs.size();i++)
        {
            sE+=strs[i];
            sE+='.';
        }
        return sE;
    }

    vector<string> decode(string s) 
    {
        vector<string>str;
        int i=0;
        string st="";
        while(i<s.length())
        {
            if(s[i]=='.')
            {
                str.push_back(st);
                st="";
                i++;
                continue;
            }
            st+=s[i];
            i++;
        }
        return str;
    }
};
