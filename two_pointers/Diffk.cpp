int Solution::diffPossible(vector<int> &A, int B) {
    int left = 0;
    int right = 1;
    while(left <= right && left < A.size() && right < A.size()){
        if(A[right]-A[left] == B && left != right){
            return 1;
        }else if ((A[right]- A[left]) > B){
            left++;
        }else{
            right++;
        }
    }
    return 0;
}
