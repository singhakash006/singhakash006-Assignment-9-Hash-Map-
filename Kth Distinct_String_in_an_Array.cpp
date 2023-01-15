class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int m=0;
        unordered_map<string,int>count;
        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
        }
        for(int i=0; i<arr.size();i++){
            if(count[arr[i]]==1){
                m++;
                cout <<m;
                if(m==k){
                    return arr[i];
                }
            }
        }
        return "";
    }
};
