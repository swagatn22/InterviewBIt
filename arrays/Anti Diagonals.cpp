vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> >res;
    for(int j = 0; j < A.size(); j++){
        vector<int>v;
        for(int i = 0, k = j; i < A.size(), k >= 0; i++,k--){
            v.push_back(A[i][k]);
        }
        res.push_back(v);
    }
    for(int i = 1; i < A.size(); i++){
         vector<int>v;
        for(int j = A.size()-1,k = i; k < A.size(); j--,k++){
            v.push_back(A[k][j]);
        }
        res.push_back(v);
    }
    return res;
}
