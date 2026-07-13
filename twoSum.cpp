class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() == 2) return {0,1};
        int n = nums.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].emplace_back(i);
        }
        vector<int> v(2);
        for(auto &it : mp){
            int a = it.first;
            vector<int> b = it.second;
            if(target == 2*a){
                if(b.size() == 2){
                    return b;
                }
            }
            else{
                auto it1 = mp.find(target-a);
                if(it1 != mp.end()){
                    v[0] = b[0];
                    v[1] = (it1->second)[0];
                    return v;
                }
            }
        }
        
        return v;
    }
};
