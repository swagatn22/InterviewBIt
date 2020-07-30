int Solution::majorityElement(const vector<int> &A) {
    int num;
    int count = 0;
    for(int i =0; i < A.size(); i++){
        if(count == 0){
            num = A[i];
        }
        if(num == A[i]){
            count++;
        }else{
            count--;
        }
    }
    retunr num
}
