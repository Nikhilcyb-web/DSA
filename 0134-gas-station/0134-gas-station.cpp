class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalcost = 0, totalgas = 0;
        int st = 0, currgas = 0;
        for (int i = 0; i < gas.size(); i++) {
            totalgas += gas[i];
            totalcost += cost[i];
            currgas += (gas[i] - cost[i]);
            if (currgas < 0) {
                st = i + 1;
                currgas = 0;
            }
        }
        if(totalgas < totalcost){
            return -1;
        } 
        return st;
    }
};