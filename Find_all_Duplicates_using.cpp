class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>count;
        vector<int>n;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=0;i<nums.size()+1;i++){
            if(count[i]>1){
                n.push_back(i);
                
            }
        }
        return n;
    }
};
