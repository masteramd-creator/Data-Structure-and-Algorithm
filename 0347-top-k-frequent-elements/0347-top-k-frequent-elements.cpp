class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> m;
        vector<int> ans;
        int c=k;
        for(int x: nums)
        {
            m[x]++;
        }

          priority_queue<pair<int, int>> pq;
        for(const auto p : m)
        {
           pq.push({p.second, p.first});
        }
           while(k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;

    }
};