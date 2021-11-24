#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s="pi= 3.14";
    auto d=stod(s.substr(s.find_first_of("+-.0123456789")));
    cout<<d;
}


/*The  substr  operation  (described  in  Table  9.12)  returns  a  string  that  is  a  copy  of part  or  all  of  the  original  string.
  We  can  pass  substr  an  optional  starting  position and  count:

string s="hello world";
string s2=s.substr(0,5);//s2=hello
string s3=s.substr(6);.   //s3=world
string s4=s.substr(6,11);//s4=world
string s5=s.substr(12); //throws an out_of_range exception
*/
Table 9.12
s.substr(pos,n):
return a string containing n characters from s starting at pos.
pos default to 0. n defaults to a value that causes the Library to copy 
all the characters from s starting from pos.
