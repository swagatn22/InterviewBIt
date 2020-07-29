vector<int> Solution::lszero(vector<int> &A) {
    int sum = 0;
    unordered_map<int,int>m;
    int start = -1;
    int end = -1;
    int len = INT_MIN;
    vector<int>vec;
    for(int i = 0; i < A.size(); i++){
        sum += A[i];
        if(sum == 0){
            if(i > len){
                start = 0;
                end = i;
                len = i+1;
            }
        }
        if(m.find(sum) != m.end()){
            if(i-m[sum] > len){
                start = m[sum]+1; 
                end = i;
                len = i-m[sum];
            }
        }else{
            m[sum] = i;
        }
    }
    if(start == -1 && end == -1) return vec;
    for(int i = start; i <=end; i++){
        vec.push_back(A[i]);
    }
    return vec;
}
