bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>>vec;
    for(int i= 0;i <arrive.size(); i++){
        vec.push_back({arrive[i],1});
        vec.push_back({depart[i],0});
    }
    sort(vec.begin(),vec.end());
    int room = 0;
    int ans = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i].second == 1){
            room++;
            ans = max(room,ans);
        }else{
            room--;
        }
    }
    return (K >= ans);
}
