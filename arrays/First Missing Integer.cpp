int Solution::firstMissingPositive(vector<int> &A) {
    int ans = 0;
    vector<bool>vec(A.size(),0);
    for(int i =0; i < A.size(); i++){
        if(A[i] > 0 && A[i] <= A.size()){
            vec[A[i]-1] = 1;
        }
    }
    int i = 0;
    while(vec[i]){
        i++;
        if(i >= A.size()) return A.size()+1;
    }
    return i+1;
}
