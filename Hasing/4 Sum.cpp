vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int sum = 0;
    int left =0;
    vector<vector<int> >res;
    int right;
    for(int i = 0; i < A.size()-3; i++){
        if(i > 0 && A[i] == A[i-1]){
            continue;
        }
        for(int j = i+1; j < A.size()-2; j++){
            if(j > i+1 && A[j] == A[j-1]){
                continue;
            }
            left = j+1;
            right = A.size()-1;
            while(left < right){
                sum = A[left]+A[i]+A[j]+A[right];
                if(sum > B){
                    right--;
                }else if(sum < B){
                    left++;
                }else{
                     vector<int>v;
                    v.push_back(A[i]);
                    v.push_back(A[j]);                     
                    v.push_back(A[left]);
                    v.push_back(A[right]);
                    res.push_back(v);
                    left++;
                    while(left < right && A[left] == A[left-1]){
                        left++;
                    }
                }
            }
        }
    }
    return res;
}
