vector<int> Solution::getRow(int A) {
    vector<int>help;
    vector<int>v;
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0){
                v.push_back(1);
            }else if(j == i){
                v.push_back(1);
            }else{
                v.push_back(help[j-1]+help[j]);
            }
        }
            help = v;
            v.clear();
    }
    return help;
}
