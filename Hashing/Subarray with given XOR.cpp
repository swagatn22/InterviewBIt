int Solution::solve(vector<int> &A, int B) {
    map<int,int>m;
    m[0] = 1;
    int ans = 0;
    int cur = 0;
    for(int i = 0; i < A.size(); i++){
        ans ^= A[i];
        if(m.find(ans^B) != m.end()){
            count += m[ans^B];
        }
        m[ans]++;
    }
    return count;
}
