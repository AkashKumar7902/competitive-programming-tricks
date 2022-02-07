
string s;
cin >> s;
// suppose s = "10198"
// and you want to replace 9 with say 1.. 
// so basically,
// you want the new string to be "10118"
// therefore you can approach through this method :
s[3] = 7 + 48;


// code snipet
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    s[3] = 1 + 48; // since ascii of 0 is 48 and the numbers following
                   // 0 i.e. 1, 2, 3... 9 have ascii 49, 50, 51...57.
                   // therefore i just added the digits to move in ascii to reach the desired number.
                   // automatic conversion of ascii to char takes place as s[3] will return a char.
  
    cout << s << endl;
    return 0;
}

// thanks .. do follow me for more such cp tricks
