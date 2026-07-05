class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start <= end){
            
            int mid = start + (end - start)/2;
            
            int next = arr[(mid+1) % n];
            int prev = arr[(mid + n -1) % n];
            
            
            if(arr[mid] <= next && arr[mid] <= prev){
                return mid;
                
            } 
            else if(arr[start] <= arr[mid]){
                
                start = mid + 1;
                
            } 
            else{
                end = mid - 1;
            }
        }
        return 0;
    }
};
