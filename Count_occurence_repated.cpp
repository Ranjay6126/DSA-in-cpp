/ count the occurnaced repated in sorted array

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
  
  
  int second(vector<int> &arr, int target){
      
      int start=0, end = arr.size()-1;
      
      int result = -1;
      
      while( start<= end){
          
          int mid = start + (end - start)/2;
          
          if(arr[mid] == target){
              
              result = mid;
              
              start = mid + 1;
              
          } else if(arr[mid] > target){
              
              end = mid - 1;
          } else {
              start = mid + 1;
          }
          
      }
      return result;
  }
  
    int countFreq(vector<int>& arr, int target) {
        // code here
        
        int f = first(arr, target);
        int s = second(arr, target);
        
        return s-f+1;
    }
};



