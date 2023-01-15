class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int r=0;
        unordered_map<int,int>count;
        for(int i=0;i<nums.size();i++){
           r+= count[nums[i]]++;
           cout<<r<<endl;
        }
        for(int i=0;i<nums.size();i++){
           cout<<count[nums[i]]<<"";
        }
        return r;
    }
};
