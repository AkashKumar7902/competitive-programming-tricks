#include<iostream>
#include<list>
#include<forward_list>
#include<string>
#include<vector>

using namespace std;
int main() {
    list<int> l={1,2,3,4,5,6};
    auto beg=l.begin();
    while(beg!=l.end()){
         ++beg;
         beg=l.insert(beg,42);
         ++beg;
    }
    
         
     
}  
