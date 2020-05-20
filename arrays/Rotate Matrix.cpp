void Solution::rotate(vector<vector<int> > &A) {
    int temp;
    for(int i = 0; i < A.size(); i++){
        for(int j = i+1; j < A[0].size(); j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i = 0; i < A.size() ; i++){
        for(int j = 0, k = A[0].size()-1; j < k; j++,k--){
            swap(A[i][j],A[i][k]);
        }
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
