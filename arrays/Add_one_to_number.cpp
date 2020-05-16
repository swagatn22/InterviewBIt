vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>vec;
    A[A.size()-1] = A[A.size()-1]+1;
    for(int i = A.size()-1; i > 0; i--){
        if(A[i] > 9){
            A[i] = 0;
            A[i-1]++;
        }
    }
    if(A[0] > 9){
        A.push_back(0);
        A[0] = 1;
    }
    if(A[0] == 0){
        int j = 0;
        while(j < A.size() && A[j] == 0){
            j++;
        }
        for(int i = j; i< A.size(); i++){
            vec.push_back(A[i]);
        }
        return vec;
    }
    
    return A;
}
