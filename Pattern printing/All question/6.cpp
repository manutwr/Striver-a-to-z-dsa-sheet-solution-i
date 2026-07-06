class Solution {
public:
  
 // Function to print Pattern 6
    void pattern6(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            // Inner loop for columns
            // Prints numbers from 1 up to (N - i)
            for (int j = N; j > i; j--) {
                cout << N - j + 1 ;
            }
            // Move to next line
            cout << endl;
        }
    }
    };




12345
1234
123
12
1
