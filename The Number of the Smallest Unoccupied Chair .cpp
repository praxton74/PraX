class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) 
    {
        vector<pair<int,pair<int,int>>>mv;
        for(int i=0;i<times.size();i++)
        {
            pair<int,pair<int,int>>p={times[i][0],{times[i][1],i}};
            mv.push_back(p);
        }
        vector<int>ch(times.size(),-1);
        sort(mv.begin(),mv.end());
        for(int i=0;i<times.size();i++)
        {
            int arr=mv[i].first;
            int de=mv[i].second.first;
            int f=mv[i].second.second;
            for(int j=0;j<times.size();j++)
            {
                if(ch[j]<=arr)
                {
                    ch[j]=de;
                    if(f==targetFriend)
                    {
                        return j;
                    }
                    break;
                }
            }
        }
        return -1;
    }
};
