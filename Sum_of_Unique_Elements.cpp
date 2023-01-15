class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
    unordered_map<int,int>count;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
     for(int i=0;i<nums.size();i++){
      if(count[nums[i]]<2){
          sum+=nums[i];}
      }
      return sum;
    }
};
