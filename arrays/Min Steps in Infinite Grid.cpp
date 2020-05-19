int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x =A[0];
    int y =B[0];
    int steps = 0;
    for(int i = 1; i < A.size(); i++){
        steps += max(abs(A[i]-x),abs(B[i]-y));
        x = A[i];
        y = B[i];
    }
    return steps;
}
