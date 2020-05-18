struct comp{
    bool operator()(string &s1,string &s2){
        return s1+s2> s2+s1;
    }
};
string Solution::largestNumber(const vector<int> &A) {
    vector<string>vec;
    for(int i = 0; i < A.size(); i++){
        vec.push_back(to_string(A[i]));
    }
    
    sort(vec.begin(),vec.end(),comp());
    string temp = "";
    for(int i =0; i< vec.size(); i++){
        temp += vec[i];
    }
    if(temp[0] == '0'){
        return "0";
    }
    return temp;
}
