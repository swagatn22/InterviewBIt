int isvalid(int num, int k,vector<int> A){
    int s = 1;
    int sum = 0;
    for(int i = 0; i < A.size(); i++){
        sum += A[i];
        if(sum > num){
            s++;
            sum = A[i];
        }
        if(s > k){
            return 0;
        }
    }
    return 1;
}
int Solution::books(vector<int> &A, int B) {
    int left = 0;
    int right = 0;
    int n = A.size();
    if(n < B) return -1;
    for(int i = 0;i < A.size(); i++){
        left = max(left,A[i]);
        right += A[i];
    }
    int mid;
    int ans;
    while(left <= right){
        mid = (right-left)/2+left;
        if(isvalid(mid,B,A)){
            ans = mid;
            right = mid-1;
        }else{
            left = mid +1;
        }
    }
    return ans;
}
