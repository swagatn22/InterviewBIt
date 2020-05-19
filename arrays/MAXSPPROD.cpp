int Solution::maxSpecialProduct(vector<int> &A) {
    vector<int> left;
    vector<int> right(A.size());
    left.push_back(0);
    stack<pair<int,int>>s1;
    stack<pair<int,int>>s2;
    s1.push({A[0],0});
    s2.push({A[A.size()-1],A.size()-1});
    right[A.size()-1] = 0;
    int m = 1000000007;
    for(int i = 1; i < A.size(); i++){
        if(!s1.empty()){
            if(s1.top().first > A[i]){
                left.push_back(s1.top().second);
                s1.push({A[i],i});
            }else{
                while(!s1.empty()&&A[i] >= s1.top().first){
                    s1.pop();
                }
                if(s1.empty()){
                    left.push_back(0);
                }else{
                    left.push_back(s1.top().second);
                }
                s1.push({A[i],i});
            }
        }
    }
    for(int i =  A.size()-2; i>= 0; i--){
        if(!s2.empty()){
            if(A[i] < s2.top().first){
                right[i] =s2.top().second;
                s2.push({A[i],i});
            }else{
                while(!s2.empty()&&A[i] >= s2.top().first){
                    s2.pop();
                }
                if(s2.empty()){
                    right[i] = 0;
                }else{
                    right[i] = s2.top().second;
                }
                s2.push({A[i],i});
            }
        }
    }
    long long int ans = INT_MIN;
    long long int prd;
    for(int i = 0; i < A.size(); i++){
        prd = (long long )left[i]*(long long)right[i];
        ans = max(ans,prd);
    }
    return ans%m; 
}
