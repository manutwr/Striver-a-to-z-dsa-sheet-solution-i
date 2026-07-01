class Solution {
public:
    int forLoop(int low, int high) {
        // Your code goes here
        int sum = 0;
         for(int i = low ; i<= high; i++)
         {sum=sum + i; }  // kyuki hame sum me add krnani thi i value jo ki hame TOTAL SUM deti
      // phle loop chala i=3 ab sum me store hui  ki value to sum ki value hui 3 i ko replace krke  
      // fir loop chala ab aya 4 to sum=i+sum me  ab bcz sum ki value 3 thi aur i ki aayi h 4 to add hoke 7 ho jaygi 
      // fir loop chalega aur sum 7 h ab value ayi i ki 5 to 7+5= 12 
      // fir loop 12+6........ and continue 
         return sum;
    // return me value save ho gyi aur platform ke paas ans chala gyaaa    ..............
    
    } 
  
};
