class Solution {
public:
    vector<int> twoSumm(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n = nums.size();

        // for(int i = 0; i < n; i++) {
        //     mpp[nums[i]] = i;
        // } this is wrong overwriting the index

        for(int i = 0; i < n; i++) {
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end()) {
                return {mpp[more],i};
            }
            mpp[a] = i;
        }
        
       return nums;
    }
};
