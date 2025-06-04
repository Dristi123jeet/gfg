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
        int n = val.size();
        vector<pair<double, int>> ratio(n);

        // Compute value-to-weight ratio
        for (int i = 0; i < n; i++) {
            ratio[i] = { (double)val[i] / wt[i], i };
        }

        // Sort in descending order of ratio using lambda
        sort(ratio.begin(), ratio.end(), [](pair<double, int> a, pair<double, int> b) {
            return a.first > b.first;
        });

        double ans = 0.0;

        for (int i = 0; i < n; i++) {
            int index = ratio[i].second;
            if (wt[index] <= capacity) {
                ans += val[index];
                capacity -= wt[index];
            } else {
                double r = ratio[i].first;
                ans += capacity * r;
                break;
            }
        }

        return ans;
    }
};
