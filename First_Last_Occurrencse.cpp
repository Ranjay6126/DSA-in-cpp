class Solution {
public:

    int firstOccurrence(vector<int>& arr, int x) {
        
        int start = 0, end = arr.size() - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                result = mid;
                
                end = mid - 1;      // first occurance // search left
            }
            else if (arr[mid] > x) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return result;
    }

    int lastOccurrence(vector<int>& arr, int x) {
        
        int start = 0, end = arr.size() - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                result = mid;
                start = mid + 1;     // last occurancce // search right
            }
            else if (arr[mid] > x) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return result;
    }
    

    vector<int> find(vector<int>& arr, int x) {

        vector<int> ans;

        ans.push_back(firstOccurrence(arr, x));
        ans.push_back(lastOccurrence(arr, x));

        return ans;
    }
};