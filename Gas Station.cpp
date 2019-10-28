class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       if(gas.empty())
           return -1;
        if(gas.size()==1){
            if(gas[0]>=cost[0])
                return 0;
            return -1;
        }
            
        int start=0;
        int end=1;
        int curPetrol=gas[start]-cost[start];
        while(start!=end||curPetrol<0){
            while(start!=end&&curPetrol<0){
                curPetrol-=gas[start]-cost[start];
                start=(start+1)%gas.size();
                if(start==0)
                    return -1;
            }
            curPetrol+=gas[end]-cost[end];
            end=(end+1)%gas.size();
        }
        return start;
    }
};