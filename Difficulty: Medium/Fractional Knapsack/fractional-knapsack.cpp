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
         int n = val.size();

        // Create a vector of tuples: {value, weight, value/weight}
        vector<tuple<int, int, double>> items;
        for (int i = 0; i < n; i++) {
            double ratio = (double)val[i] / wt[i];
            items.push_back(make_tuple(val[i], wt[i], ratio));
        }

        // Sort by value/weight ratio in descending order
        sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
            return get<2>(a) > get<2>(b); // Compare ratios
        });

        double ans = 0.0;

        for (const auto& item : items) {
            int value = get<0>(item);
            int weight = get<1>(item);
            double ratio = get<2>(item);

            if (capacity >= weight) {
                ans += value;
                capacity -= weight;
            } else {
                ans += ratio * capacity;
                break;
            }
        }

        return ans;
    }
};
