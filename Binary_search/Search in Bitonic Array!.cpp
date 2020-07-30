int peak(vector<int> A){
    int left = 0;
    int n = A.size();
    int right = n-1;
    int mid;
    while(left <= right){
        mid = (right-left)/2+left;
        if(mid > 0 && mid < n-1){
            if(A[mid] > A[mid-1] && A[mid] > A[mid+1]){
                return mid;
            }else if(A[mid-1] < A[mid]){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }else {
            if(mid == 0 && A[mid] > A[mid+1]){
                return 0;
            }else{
                return 1;
            }
            if(mid == n-1 && A[mid] > A[mid-1]){
                return mid;
            }else{
                return mid-1;
            }
        }
    }
}
int search1(vector<int>A, int ele,int left,int right){
    while(left <= right){
        int mid = (right-left)/2+left;
        if(A[mid] == ele){
            return mid;
        }else if(A[mid] > ele){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return -1;
}
int search2(vector<int>A, int ele,int left,int right){
    while(left <= right){
        int mid = (right-left)/2+left;
        if(A[mid] == ele){
            return mid;
        }else if(A[mid] < ele){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return -1;
}
int Solution::solve(vector<int> &A, int B) {
    int ind = peak(A);
    if(A[ind] == B){
        return ind;
    }
    int id1 = search1(A,B,0,ind-1);
    int id2 = search2(A,B,ind,A.size()-1);
    if(id1 != -1){
        return id1;
    }else if(id2 != -1){
        return id2;
    }
    return -1;
}
