void Solution::setZeroes(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    for(int i = 0; i < n; i++){
        int flag = 0;
        for(int j = 0; j < m; j++){
            if(A[i][j] == 0){
                flag = 1;
                break;
            }
        }
        for(int j = m - 1; j >= 0; j--){
            if(flag == 1){
                if(A[i][j] == 0) A[i][j] = 2;
                else 
                    A[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < m; i++){
        int flag = 0;
        for(int j = 0; j < n; j++){
            if(A[j][i] == 2){
                flag = 1;
                break;
            }
        }
        for(int j = n - 1; j >= 0; j--){
            if(flag == 1) A[j][i] = 0;
        }
    }
}
