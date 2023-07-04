class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, rem = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            rem = sum % k;
            if(rem < 0){
                rem += k;
            }
            // if rem found in map 
            if(mp.find(rem) != mp.end()){
                ans += mp[rem];
                mp[rem]++;
            }
            // if rem not found in map 
            else{
                mp[rem] = 1;
            }
        }
        return ans;
    }
};