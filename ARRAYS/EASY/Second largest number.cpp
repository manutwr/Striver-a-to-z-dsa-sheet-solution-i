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
        if (arr[i]!= ans1){ // second largest number first largest ke barabar nahi hona chahiye 
            ans2 = max(ans2 , arr[i]); // to max me ans2 daal do aur arr[i] me daal do
        }
      }
      if (ans2 == INT_MIN){ // agar hame scond largest nahi milta hai to hm 1 eturn kr dnege
        return -1;
      }
      return ans2;
      
    }
};
