string Solution::minWindow(string A, string B) {
    vector<int>hash(256,0);
    vector<int>search(256,0);
    int count = 0;
    int len = B.length();
    for(int i = 0; i < B.length(); i++){
        search[B[i]]++;
    }
    int start = -1;
    int end = 0;
    int left = 0;
    int ans = INT_MAX;
    for(int i = 0; i < A.length(); i++){
        hash[A[i]]++;
        if(hash[A[i]] <= search[A[i]]){
            count++;
        }
        if(count == len){
            while(hash[A[left]] > search[A[left]]){
                hash[A[left]]--;
                left++;
            }
            if((i-left+1) < ans){
                ans = i-left+1;
                start = left;
                end = i;
            }
        }
    }
    if(start == -1){
        return "";
    }
    string res = "";
    for(int i = start; i <= end; i++){
        res += A[i];
    }
    return res;
}
