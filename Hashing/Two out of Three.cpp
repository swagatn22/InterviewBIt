vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    map<int,set<int>>m;
    for(int i = 0; i < A.size(); i++){
        m[A[i]].insert(i);
    }
    for(int i = 0; i < B.size(); i++){
        m[B[i]].insert(i);
    }
    for(int i = 0; i < C.size(); i++){
        m[C[i]].insert(i);
    }
    vector<int>res;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second.size() >= 2 ){
            res.push_back(it->first);
        }
    }
    return res;
}
