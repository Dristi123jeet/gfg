class Solution {
  public:
    void merge(vector<int>& arr, int l, int m, int r) {
        int i = l;
        int j = m + 1;
        vector<int> temp;

        while (i <= m && j <= r) {
            if (arr[i] < arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }

        while (i <= m) {
            temp.push_back(arr[i++]);
        }

        while (j <= r) {
            temp.push_back(arr[j++]);
        }

        // Copy temp back to original array
        for (int x = 0; x < temp.size(); x++) {
            arr[l + x] = temp[x];
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r) return;

        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
};
