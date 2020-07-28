void Solution::merge(vector<int> &A, vector<int> &B) {
    int j = 0;
    int k = 0;
    vector<int>res(A.size()+B.size());
    int i = 0;
    while(j < A.size() && k < B.size()){
        if(A[j] <= B[k]){
            res[i++] = A[j++];
        }else{
            res[i++] = B[k++];
        }
    }
    while(j < A.size()){
        res[i++] = A[j++];
    }
    while(k < B.size()){
        res[i++] = B[k++];
    }
    A = res;
}
