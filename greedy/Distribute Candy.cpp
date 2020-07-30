int Solution::candy(vector<int> &A) {
    vector<int>left(A.size());
    left[0] = 1;
    vector<int>right(A.size());
    right[A.size()-1] = 1;
    for(int i = 1; i < A.size(); i++){
        if(A[i] > A[i-1]){
            left[i] = left[i-1]+1;
        }else{
            left[i] = 1;
        }
    }
    for(int i = A.size()-2; i >= 0; i--){
        if(A[i] > A[i+1]){
            right[i] = right[i+1]+1;
        }else{
            right[i] = 1;
        }
    }
    int sum = 0;
    for(int i =0; i < A.size(); i++){
        sum += max(left[i],right[i]);
    }
    return sum;
    
}
