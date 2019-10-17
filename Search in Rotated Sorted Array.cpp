class Solution {
public:
    int search(vector<int>& A, int target) {
        if(A.size()==0)
            return -1;
        int f=0;
        int s=0,e=A.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            if(A[m]==target){
               return m;
            }
            if(A[s]<=A[m]){  //first line
                if(target<=A[m])
                    e=m-1;
                else
                    s=m+1;
                    
            }else{
                
                 if(target>=A[m])
                   s=m+1;
                else
                    e=m-1;                    
                    
                
            }
            
        }
        return -1;
    }
};