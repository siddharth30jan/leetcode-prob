class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> V;
        if(matrix.size()==0)
            return V;
       
        int t=0,b=matrix.size()-1,l=0,r=matrix[0].size()-1;
        int z=matrix.size()*matrix[0].size();
        int d=0;
       
        while(z>0){
            
            if(d==0&&z>0){
                  for(int i=l;i<=r;i++){
                     z--;
                cout<<matrix[t][i]<<" ";
                V.push_back(matrix[t][i]);
            }
            t++;
                
                
            }
           
               

          
                if(d==1&&z>0){
                     for(int i=t;i<=b;i++){
                         z--;
                cout<<matrix[i][r]<<" ";
                V.push_back(matrix[i][r]);
            }
            r--;
                    
                }
            
            if(d==2&&z>0){
                 for(int i=r;i>=l;i--){
                     z--;
                cout<<matrix[b][i]<<" ";
                V.push_back(matrix[b][i]);
            }
            b--;   
                
            }
            
                
            
         
                
                if(d==3&&z>0){
                     for(int i=b;i>=t;i--){
                         z--;
                cout<<matrix[i][l]<<" ";
                V.push_back(matrix[i][l]);
            }
            l++;   
            }
            
            d=(d+1)%4;
           
            
          
            
            
             
        }
        return V;
    }
};



/*
User value
1. Providing a rich variety of dishes.
2. Providing door step delivery.
3. Rare dishes for premium customers.
4. Managing all of these through an application.
5. App is compatible both for ios and android users.
*/

/*
1. The goal of a user adoption strategy is to help users reach their goal. That means conducting research to understand users’ motivations, needs, environments, beliefs, complaints, and, most important, all the reasons why users don’t adopt.

