int Solution::maximumGap(const vector<int> &A) {
    if(A.size() == 1) return 0;
    int ind1 = -1;
    int num = INT_MAX;
    int ans = 0; 
    for(int i = 0; i < A.size(); i++){
        if(A[i] < num){
            num = A[i];
            ind1 = i;
        }
        if(A[i] >= num && i > ind1){
            ans = max(ans,i-ind1);
        }
    }
    return ans;
}
