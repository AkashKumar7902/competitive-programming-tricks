#include <iostream>
using namespace std;

int get_position_of_set_bit(int n){
  int j = 0; // will act as a pointer to the position of set bit in n; 
  while(n > 0) {
    int last_bit = (n & 1); // will extract the last bit from n;
    if(last_bit) {
      cout << j << " ";
    }
    n >>= 1; // we are removing the last bit as it has already been processed above
             // warning : the originality of n is lost by this method. (use method 2 mentioned below)
  }
  return 0;
}

//method 2 

void method2 (int n) {
  for (ll i = 0; i < 64; ++i) {  // we are iterating through every bit in the largest possible integer.
       if ((1 << i) & n) { // condition to check if the bit at the position denoted by i
           cout << i << " ";          // is set or not.
                                // the originality of n is not lost by this method. 
       }
  }
  cout << endl;
}

int main() {
  int n; cin >> n; 
  get_position_of_set_bit(n);
  method2(n);
}
  
         
    
