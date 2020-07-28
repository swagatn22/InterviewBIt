int Solution::nTriang(vector<int> &A) {
    if(A.size() <= 2){
        return 0;
    }
    sort(A.begin(),A.end());
    long long int count = 0;
    long long int m = 1000000007;
    for(int k = A.size()-1; k >= 0; k--){
        int i = 0;
        int j = k-1;
        while(i < j){
            if(A[i]+A[j] > A[k]){
                count = count + (j-i);
                j--;
            }else{
                i++;
            }
        }
        
    }
    return count%m;
}

