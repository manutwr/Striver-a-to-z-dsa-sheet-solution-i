class Solution {
public:
    int largestElement(vector<int>& arr ) {
        int n = arr.size(); //array ka size de clear kro
     int ans = INT_MIN; // ek minimum value o assume karo 
     for (int i = 0; i<n; i++){ // ek loop chalao
        if (arr[i]>ans  ){ // agar array ka ki element answer se bada payaa gyaa to usee ans me put kr do
            ans = arr[i]; // put the element in aswer 
        }
     }
     return ans; // as a answer return kar do 
    }
};
