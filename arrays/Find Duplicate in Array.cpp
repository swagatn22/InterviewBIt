int Solution::repeatedNumber(const vector<int> &A) {
    vector<bool>vec(A.size(),0);
    int ans = -1;
    for(int i = 0; i < A.size(); i++){
        if(!vec[A[i]]){
            vec[A[i]] = 1;
        }else{
          ans = A[i];
          break;
        }
    }
    return ans;
}
