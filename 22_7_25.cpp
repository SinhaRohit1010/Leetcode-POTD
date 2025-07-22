class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;

        int i =0;
        int j=0;
        int sum = 0;
        int res = 0;

        while(j < n)
        {
            if(!st.count(nums[j]))
            {
                sum += nums[j];
                res = max(sum, res);
                st.insert(nums[j]);
                j++;
            }
            else{
                while(i<n && st.count(nums[j]))
                {
                    sum -= nums[i];
                    st.erase(nums[i]);
                    i++;
                }
            }
        }
        return res;
    }
};