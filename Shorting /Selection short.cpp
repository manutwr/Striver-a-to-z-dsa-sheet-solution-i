class Solution {
public:
    vector<int> selectionSort(vector<int>& arr) {
       int n = arr.size();  // array ka size declear
        for (int i= 0 ;  i< n-1 ; i++){ // loop chalaya last tak 
             int smallest = i; // assume kiya ki i smallest hai 
            for (int j =i+1 ; j<n ; j++ ){ // fir ek loop chalaya smallest dhundhne ke lie 
                if (arr[j]< arr [smallest]){ // agar hamara smallest element jo ki i tha woh bada ho gya j se mtlb koi aur element hai jo smallest s bhi small h;
                    smallest = j; // fir hmne smallest ko update krke  daal dia smallest me;
                }
                
            }
             swap (arr[i],arr[smallest])  ; // ek swap kia smallest ko array i se kyuki array short ho.... array ke index me sbse smallest value put ki kykui index zero me sbse smallest value hi aati hai;;;;; aur fir loop run krwaya again and again 
        }
        return arr;
    
    } 
    
};
