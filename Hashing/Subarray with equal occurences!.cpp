int Solution::solve(vector<int> &A, int B, int C) {
    int count1 = 0;
    int count2 = 0;
    int ans = 0;
    map<int,int>m;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == B){
            count1++;
        }
        if(A[i] == C){
            count2++;
        }
        if(count1 == count2){
            ans++;
        }
        m[count1-count2]++;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        ans += it->second*(it->second-1)/2;
    }
    return ans;
}
