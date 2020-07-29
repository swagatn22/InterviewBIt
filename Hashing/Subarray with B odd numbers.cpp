int Solution::solve(vector<int> &A, int B) {
        int count = 0;
        vector<int>res(A.size());
        for(int i = 0; i < A.size(); i++){
            res[i] = A[i]%2;
        }
        unordered_map<int,int>m;
        int sum = 0;
        for(int i = 0; i < A.size(); i++){
            sum += res[i];
            if(sum == B){
                count++;
            }
            if(m.find(sum-B) != m.end()){
                count += m[sum-B];
            }
            m[sum]++;
        }
        return count;
}


