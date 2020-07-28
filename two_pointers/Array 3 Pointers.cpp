int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
     int i = 0;
     int j = 0;
     int k = 0;
     int res = INT_MAX;
    while(i < A.size() && j < B.size() && k < C.size()){
        int temp = max(abs(A[i]-C[k]),max(abs(A[i] - B[j]), abs(B[j] - C[k])));
        res = min(res,temp);
        if(A[i] <= B[j] && A[i] <= C[k]){
            i++;
        }
        else if(B[j] <= A[i] && B[j] <= C[k]){
            j++;
        }else {
            k++;
        }
    }
    return res;
}
