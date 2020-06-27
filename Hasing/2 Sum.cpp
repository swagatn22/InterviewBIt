vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,int>m;
    vector<int>vec;
    for(int  i = 0; i < A.size(); i++){
        if(m.find(B-A[i]) == m.end()){
            m[A[i]] = i;
        }else{
            vec.push_back(m[B-A[i]]+1);
            vec.push_back(i+1);
            return vec;
        }
    }
    return vec;
}
