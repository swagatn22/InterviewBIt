int Solution::searchInsert(vector<int> &A, int B) {
    int left = 0;
    int right = A.size()-1;
    int mid;
    while(left<=right){
        mid = (right-left)/2+left;
        if(A[mid] == B){
            return mid;
        }else if(A[mid] > B){
            right = mid-1;
        }else{
            left = mid + 1;
        }
    }
    return left;
}
