void Solution::sortColors(vector<int> &A) {
    int cur = 0;
    int prv = 0;
    int last = A.size()-1;
    while(cur < last){
        if(A[cur] == 2){
            swap(A[cur],A[last]);
            last--;
        }else if(A[cur] == 0){
            swap(A[cur],A[prv]);
            cur++;
            prv++
        }else{
            cur++;
        }
    }
}
