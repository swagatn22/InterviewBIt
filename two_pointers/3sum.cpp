int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int left = 0;
    int right = A.size()-1;
    int sum = 0;
    int close = INT_MAX;
    int ans;
    for(int i = 0; i <A.size(); i++){
        sum  = 0;
        left = i+1;
        right = A.size()-1;
        while(left < right){
            sum = A[i]+A[left]+A[right];
            if(abs(sum-B) <= abs(close) ){
                close = sum-B;
                ans = sum;
            }
            if(sum > B){
                right--;
            }else{
                left++;
            }
        }
    }
    return ans;
}
