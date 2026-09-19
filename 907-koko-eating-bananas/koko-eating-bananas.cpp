class Solution {
public:
bool predict(vector<int>& piles,int mid,int h){
    long long sum=0;
    for(int i=0;i<piles.size();i++){
       sum+=((piles[i]+mid-1)/mid);
    }
    if(sum<=h){
        return true;
    }else{
    return false;
    }
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=0;
        int max=piles[0];
        for(int x:piles){
            if(x>max){
                max=x;
            }
        }
        int high=max+1;
        while(high-l>1){
            int mid=l+(high-l)/2;
            if(predict(piles,mid,h)==false){
                l=mid;
            }else{
                high=mid;
            }
        }
        return high;

    }
};