vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> temp = A;
    int first = A.size();
    int last = 0;
    vector<int>res;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < A.size(); i++){
        if(temp[i] != A[i]){
            first = min (first,i);
            last = max (last,i);
        }
    }
    if(last - first <= 0){
        res.push_back(-1);
    }else{
        res.push_back(first);
        res.push_back(last);
    }
    return res;
}
