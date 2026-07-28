class Solution{	
	public:
		bool isSorted(vector<int>& arr ){
			//your code goes here
          for (int i = 0 ; i < arr.size ()-1  ; i++ ){
            if ( arr [i]> arr[i+1]){
            return false ;
          }
    
		} 
      
         return true;
}
};
