int Solution::removeElement(vector<int> &A, int B) {
  int j = 0;
  for(int i = 0; i < A.size(); i++){
      if(A[i] != B){
          A[j++] = A[i];
      }
  }
  return j;

}
