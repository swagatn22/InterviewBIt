int Solution::maxArea(vector<int> &A) {
    int left =0;
    int right = A.size()-1;
    int ans = INT_MIN;
    int water;
    for(int i = 0; i < A.size(); i++){
        water = min(A[left],A[right])*(right-left);
        ans = max(ans,water);
        if(A[left] < A[right]){
            left++;
        }else{
            right--;
        }
    }
    return ans;
}
