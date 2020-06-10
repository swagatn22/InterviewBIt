int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int left = 0;
    int right = A[0].size()-1;
    while(left < A.size() && right >= 0 ){
            if(B == A[left][right]){
                return 1;
            }else if(B < A[left][right]){
                right--;
            }else{
                left++;
            }
    }
    return 0;
}
