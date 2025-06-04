class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
     static bool compare(pair<int,int>p1, pair<int,int>p2){
         return p1.second<p2.second;
     }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int n=start.size();
        vector<pair<int, int>>pairs(n);
        for(int i=0; i<n; i++){
            pairs[i]=make_pair(start[i], end[i]);
        }
         sort(pairs.begin(),pairs.end(),compare);
         int ans=1;
         int curre= pairs[0].second;
         for(int i=1; i<n; i++){
             if(pairs[i].first> curre){
                 ans++;
                 curre= pairs[i].second;
             }
         }
         
        return ans;
    }
};