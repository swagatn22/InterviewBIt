vector<int> Solution::findPerm(const string A, int B) {
    vector<int>res;
    int max = B;
    int min = 1;
    for(int i = 0 ; i < A.size(); i++){
        if(A[i] == 'I'){
            res.push_back(min);
            min++;
        }else{
            res.push_back(max);
            max--;
        }
    }
    res.push_back(min); //at the min== max always
    return res;
}
