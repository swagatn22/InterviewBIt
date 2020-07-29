int Solution::colorful(int A) {
    vector<int>res;
    unordered_map<int, int>m;
    while(A > 0){
        if(m.find(A % 10) == m.end()){
            m[A%10] = 1;
        }else{
            return 0;
        }
        res.push_back(A % 10);
        A /= 10;
    }
    int prd = 1;
    for(int i = 0 ; i < res.size()-1; i++){
        prd = res[i];
        for(int j = i+1; j <res.size(); j++){
            prd *= res[j];
            if(m.find(prd) == m.end()){
                m[prd] = 1;
            }else{
                return 0;
            }
        }
    }
    return 1;
}
