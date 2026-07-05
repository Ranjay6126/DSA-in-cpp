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


/// count the occurnaced repated in sorted array

class Solution {
  public:
  
  
  int first(vector<int> &arr, int target){
      
      int start = 0;
      int end = arr.size() - 1;
      
      int result = -1;
      
      while(start <= end ){
          
          int mid = start + (end - start)/2;
          
          if(arr[mid] == target){
              
              result = mid;
              end = mid - 1;
              
          }else if(arr[mid] > target){
              
              end = mid - 1;
              
          } else{
              start = mid+1;
          }
      }
      return result;
  }
  
  