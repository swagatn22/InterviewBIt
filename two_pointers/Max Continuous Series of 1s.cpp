vector<int> Solution::maxone(vector<int> &A, int B) {
    int len = INT_MIN;
    int zeros = 0;
    int n = A.size();
    int left = 0;
    int start = 0;
    int end = 0;
    vector<int>res;
    for(int i = 0; i < n; i++){
        if(A[i] == 0){
            zeros++;
        }
        while(zeros > B){
            if(A[left] == 0){
                zeros--;
            }
            left++;
        }
        if(len < i-left){
            len = i-left;
            start = left;
            end = i;
        }
    }
    for(int i = start; i <= end; i++){
        res.push_back(i);
    }
    return res;
}
