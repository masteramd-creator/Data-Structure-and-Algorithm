class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + nums[i];
    }
    
    int min_sum = INT_MAX;
    multiset<int> window;
    
    for (int i = l; i <= n; ++i) {
       
        window.insert(prefix[i - l]);
        
        if (i - r - 1 >= 0) {
            window.erase(window.find(prefix[i - r - 1]));
        }
        
        auto it = window.lower_bound(prefix[i]);
        if (it != window.begin()) {
            --it; 
            min_sum = min(min_sum, prefix[i] - *it);
        }
    }
    
    return (min_sum == INT_MAX) ? -1 : min_sum;
    }
};