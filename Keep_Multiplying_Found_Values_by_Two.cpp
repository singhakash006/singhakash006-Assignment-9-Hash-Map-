class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int c=original;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(c==nums[i]){
                c=2*c;
            }
           
        }
        return c;
    }
};
