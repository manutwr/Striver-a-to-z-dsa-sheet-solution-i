class Solution {
public:
    vector<int> selectionSort(vector<int>& arr) {
       int n = arr.size();
        for (int i= 0 ;  i< n-1 ; i++){
             int smallest = i;
            for (int j =i+1 ; j<n ; j++ ){
                if (arr[j]< arr [smallest]){
                    smallest = j;
                }
                
            }
             swap (arr[i],arr[smallest])  ;
        }
        return arr;
    
    } 
    
};
