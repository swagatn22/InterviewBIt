vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n = A.size();
    int low = 0;
    int high = n-1;
    int mid;
    vector<int> a(2,-1);
    while(low < high){
        mid = low + (high-low)/2;
        if(A[mid] < B)
            low = mid+1;
        else
            high=mid;
    }
    if(A[low]!=B)
        return a;
    else
        a[0]=low;
    high=n-1;
    
    while(low < high){
        mid = (low + high)/2 + 1;
        if(A[mid] >B)
            high = mid-1;
        else
            low = mid;
    }
    a[1] = high;
    return a;
}

//another approach using low pointer concept
int search(vector<int>&A, int B){
    int left = 0;
    int right = A.size()-1;
    int mid;
    vector<int>vec;
    while(left <= right){
        mid = (right-left)/2+left;
        if(A[mid] >= B){
            right = mid-1;
        }else{
            left = mid + 1;
        }
    }
    return left;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int>v;
    v = A;
    int ind1 = search(v,B);
    int ind2 = search(v,B+1)-1;
    if(A[ind1] != B){
        return {-1,-1};
    }
    return {ind1,ind2};
}
