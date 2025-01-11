#include <iostream>


int sum(int k){
    if(k>0){
        return k+sum(k-1);

    }else{
        return 0;
    }
}
int main(){
    int result=sum(10);
    std::cout<<result;
}



        // recursion explanation

// //int sum(int k) {
//   if (k > 0) {
//     return k + sum(k - 1);
//   } else {
//     return 0;
//   }
// }
// This is a recursive function called sum that adds up numbers from k down to 1. When k is greater than 0, the function adds k to the result of calling sum(k - 1). When k becomes 0, the recursion stops and returns 0.


// int main() {
//   int result = sum(10);
//   std::cout << result;
//   return 0;
// }
// In main(), we call sum(10). This starts the process of summing numbers from 10 down to 1.

// Step-by-Step Breakdown:
// Call sum(10):

// Since 10 > 0, the function returns 10 + sum(9).
// Call sum(9):

// Since 9 > 0, the function returns 9 + sum(8).
// Call sum(8):

// Since 8 > 0, the function returns 8 + sum(7).
// Call sum(7):

// Since 7 > 0, the function returns 7 + sum(6).
// Call sum(6):

// Since 6 > 0, the function returns 6 + sum(5).
// Call sum(5):

// Since 5 > 0, the function returns 5 + sum(4).
// Call sum(4):

// Since 4 > 0, the function returns 4 + sum(3).
// Call sum(3):

// Since 3 > 0, the function returns 3 + sum(2).
// Call sum(2):

// Since 2 > 0, the function returns 2 + sum(1).
// Call sum(1):

// Since 1 > 0, the function returns 1 + sum(0).
// Call sum(0):

// Since 0 is not greater than 0, the function returns 0.
// Unwinding the recursion:
// Now that the base case (sum(0)) has returned 0, the previous calls start to resolve:

// sum(1) returns 1 + 0 = 1
// sum(2) returns 2 + 1 = 3
// sum(3) returns 3 + 3 = 6
// sum(4) returns 4 + 6 = 10
// sum(5) returns 5 + 10 = 15
// sum(6) returns 6 + 15 = 21
// sum(7) returns 7 + 21 = 28
// sum(8) returns 8 + 28 = 36
// sum(9) returns 9 + 36 = 45
// sum(10) returns 10 + 45 = 55
// Finally, sum(10) returns 55, and the result 55 is printed by std::cout.






