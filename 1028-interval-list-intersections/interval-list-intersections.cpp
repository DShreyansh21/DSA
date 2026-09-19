class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        for(int i=0;i<firstList.size();i++){
            for(int j=0;j<secondList.size();j++){
                if(firstList[i][0]>secondList[j][1]||firstList[i][1]<secondList[j][0]){
                    continue;
                }
                else{
                    ans.push_back({max(firstList[i][0],secondList[j][0]),min(firstList[i][1],secondList[j][1])});
                }
            }
        }
        // sort(ans.begin(),ans.end());
        // if(ans.size()==0) return ans;
        // vector<vector<int>> ans1;
        // ans1.push_back(ans[0]);
        // for(int i=1;i<ans.size();i++){
        //     if(ans[i][0]<=ans1.back()[1]){
        //        ans1.back()[1]=max(ans1.back()[1],ans[i][1]);
        //     }
        //     else{
        //         ans1.push_back(ans[i]);
        //     }
        // }
        return ans;
    }
};