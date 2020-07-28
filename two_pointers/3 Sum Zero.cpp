vector<vector<int> > Solution::threeSum(vector<int> &A) {
        sort(A.begin(), A.end());
        vector<vector<int>> result;
        if(A.size() <= 2) return result;
        long long int sum = 0;
        for(int i = 0; i < A.size() - 2; i++){
            if(i > 0 && A[i] == A[i - 1])
                continue;
            int start = i + 1;
            int end = A.size() - 1;
            while(start < end){
                int totalSum = (long long int)A[i] + (long long int)A[start] + (long long int)A[end];
                if(totalSum > sum) end--;
                else if(totalSum < sum) start++;
                else {
                    vector<int> help;
                    help.push_back(A[i]);
                    help.push_back(A[start]);
                    help.push_back(A[end]);
                    result.push_back(help);
                    ++start;
                    while (start < end && A[start] == A[start - 1])
                            ++start;
                }
            }
        }
        return result;
}
    
