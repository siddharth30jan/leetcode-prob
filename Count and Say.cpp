class Solution {
public:
    string countAndSay(int n) {
        string t="1";
        for(int j=2;j<=n;j++){
            
            string temp="";
           for(int i=0;i<t.length();i++){
               if(i==t.length()-1){
                    temp+=to_string(1);
               temp+=t.substr(i,1); 
               }else{
                   string x=t.substr(i,1);
               char y=t[i];
               int c=1;
               while(i+1<t.length()&&y==t[i+1]){
                   c++;
                   i++;
               }
               temp+=to_string(c);
               temp+=x; 
              // cout<<"temp "<<temp<<endl;
               }
               
           }
            t=temp;
           // cout<<t<<endl;
        }
        return t;
    }
};