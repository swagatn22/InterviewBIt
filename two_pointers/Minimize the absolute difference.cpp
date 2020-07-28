int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int ptr1 = 0;
    int ptr2 = 0;
    int ptr3  = 0;
    int max_num = INT_MIN;
    int min_num = INT_MAX;
    int ans = INT_MAX;
    while(ptr1 < A.size() && ptr2 < B.size() && ptr3 < C.size()){
        max_num = max(max(A[ptr1],B[ptr2]),C[ptr3]);
        min_num = min(min(A[ptr1],B[ptr2]),C[ptr3]);
        if(min_num == A[ptr1] && ptr1 < A.size()){
            ptr1++;
        }
        if(min_num == B[ptr2] && ptr2 < B.size()){
            ptr2++;
        }
        if(min_num == C[ptr3] && ptr3 < C.size()){
            ptr3++;
        }
        ans = min(ans,abs(max_num-min_num));
    }
    return ans;
}

