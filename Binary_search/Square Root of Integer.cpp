int Solution::sqrt(int A) {
    int left = 1;
    int right = A;
    long long int mid;
    while(left <= right){
        mid = (right-left)/2+left;
        if(mid *mid == A){
            return mid;
        }else if(mid*mid > A){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return left-1;
}
