class Solution {
public:
    int findKRotation(vector<int> &arr) {

        int n = arr.size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {

            // If the current part is already sorted
            if (arr[start] <= arr[end])
                return start;

            int mid = start + (end - start) / 2;

            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;

            // Minimum element found
            if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
                return mid;

            // Left half is sorted
            if (arr[start] <= arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }

        return 0;
    }
};