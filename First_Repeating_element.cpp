int Solution::solve(vector<int> &A) {
    int maxa=-1;
    int maxf=-1;
      unordered_map<int,int>count;
    for(int i=0;i<A.size();i++){
        count[A[i]]++;
        maxf=max(count[A[i]],maxf);
    }
    
    for(int i=0;i<A.size();i++){
        
        if(maxf>1){
             
        if(count[A[i]]>1){
            maxa=A[i];
            break;
        }}
    }return maxa;
}

