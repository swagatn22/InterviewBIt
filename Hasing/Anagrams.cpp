vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> >res;
    unordered_map<string,vector<int>>m;
    string s;
    for(int i = 0; i < A.size(); i++){
        s = A[i];
        sort(s.begin(),s.end());
        if(m.find(s) == m.end()){
            vector<int>v;
            v.push_back(i+1);
            m[s] = v;
            v.clear();
        }else{
            m[s].push_back(i+1);
        }
    }
    for(auto it = m.begin(); it != m.end(); it++){
        res.push_back(it->second);
    }
    return res;
}
