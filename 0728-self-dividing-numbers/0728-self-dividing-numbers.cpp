class Solution {
public:

    bool find(int x){
        int h = x;
        while(x>0){
            if(x%10 == 0 || (h%(x%10) != 0)){
                return 0;
            }
            x/=10;
        }

        return 1;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(find(i)){
                ans.push_back(i);
            }
        }

        return ans;
    }
};