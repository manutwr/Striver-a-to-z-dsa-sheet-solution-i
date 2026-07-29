class Solution{	
	public:
		bool isSorted(vector<int>& arr ){
			//your code goes here
          for (int i = 0 ; i < arr.size ()-1  ; i++ ){ // array ko arr-1 tak jaane do
            if ( arr [i]> arr[i+1]){ //  agar array i bada haai to false maaar de
            return false ; // false return kr do
          }
    
		} 
      
         return true; // nii to shi to hai hi
}
};
