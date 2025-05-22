// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size() ;
         priority_queue<pair<double , pair<int , int>>> pq ;
         for(int i=0 ; i< n ; i++){
             double x = (double)val[i]/ wt[i] ;
             pq.push({x , {val[i] , wt[i]}}) ;
         }
         double ans =  0  ;
         
         while(!pq.empty() && capacity>0){
             
             double unit = pq.top().first ;
             int value = pq.top().second.first ;
             int weight = pq.top().second.second ;
             pq.pop() ;
             
             if(capacity>=weight){
                 ans+= value ;
                 capacity = capacity-weight ;
             }
             else if(weight > capacity) {
                 ans += unit*capacity ;
                 capacity = 0 ;
             }
         }
         return ans ;
    }
};
