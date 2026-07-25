class Solution {
public:
    int secondLargestElement(vector<int>& arr) {
        //your code goes here
      int n = arr.size ();
      int ans1 = INT_MIN;
      // for largest number 
      for (int i= 0; i<n; i++){
        if ( arr [i]>ans1 ){
            ans1 = arr[i];
        }
      }
      // for second largest 
      int ans2 = INT_MIN ;
      for (int i = 0 ; i<n ; i++ ){
        if (arr[i]!= ans1){
            ans2 = max(ans2 , arr[i]);
        }
      }
      if (ans2 == INT_MIN){
        return -1;
      }
      return ans2;
      
    }
};
