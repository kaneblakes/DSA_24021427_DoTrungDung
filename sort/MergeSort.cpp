#include <algorithm>
#include <vector>
using namespace std;

class MergeSort {
    private:
        vector<int> arr;
        int size = arr.size();
    
    public:
        void merge(vector<int>& arr, int l, int m, int r) {
            int n1 = m - l + 1; 
            int n2 = r - m;
            vector<int> left(n1);
            vector<int> right(n2);
            for (int i = 0; i < n1; i++)
                left[i] = arr[l + i];
            for (int j = 0; j < n2; j++) 
                right[j] = arr[m + 1 + j];

            int i = 0, j = 0, k = l;

            while (i < n1 && j < n2) {
                if (left[i] <= right[j])
                    arr[k++] = left[i++];
                else
                    arr[k++] = right[j++];
            }
        }
        void mergeSort(vector<int>& arr, int l, int r) {
            if (l >= r)
                return;
            
            int m = l + (r - l) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
};