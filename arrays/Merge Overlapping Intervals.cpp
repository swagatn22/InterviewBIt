bool comp(Interval a, Interval b){
    return a.start < b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(), A.end(), comp);
    vector<Interval> result;
    result.push_back(A[0]);
    for(int i = 1; i < A.size(); i++){
        if(A[i].start <= result[result.size() - 1].end){
            result[result.size() - 1].end = max(result[result.size() - 1].end, A[i].end);
        }else
            result.push_back(A[i]);
    }
    return result;
    
}
