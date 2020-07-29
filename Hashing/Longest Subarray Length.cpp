int Solution::solve(vector<int> &A) {
    int sum = 0;
    map<int,int>m;
    int ans = INT_MIN;
    for(int i = 0; i < A.size(); i++){
        sum += A[i] == 0 ? -1 : 1;
        if(sum == 1){
            ans  = max(ans,i+1);
        }
        if(m.find(sum-1) != m.end()){
            ans = max(ans,i-m[sum-1]);
        }
        if(m.find(sum) == m.end()){
            m[sum] = i;
        }
    }
    return ans;
}
