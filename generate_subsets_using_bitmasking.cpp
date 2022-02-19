#include <iostream>
using namespace std;

void filter(int n, char c[]) { 
  int j = 0; 
  while(n > 0) {
    int last_bit = (n & 1);
    if(last_bit) {
      cout << c[j];
    }
    j++;
    n >>= 1;
  }
  cout << endl;
  return;
}

void printsubsets(char a[]) {
  int n = strlen(a);
  for(int i = 0; i < (1 << n); ++i) {  
    filter(n, a);
  }
  return;
}

int main() {
  char a[100];
  cin >> a;
  printsubsets(a);
}
