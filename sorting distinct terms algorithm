/* i created an algorithm to search for distinct digits 
   in year of the format xxxx stored in a string
   original question :
 https://codeforces.com/contest/271/submission/132722909
  the code is correct but run time is too high....
   hence the sort is inefficient.
   */
  //inefficient algorithm 
 for(int i=0;i!=s.size()-1;++i){
      int cnt=0;
      for(int j=0;j!=s.size();++j)
          if(s[i]!=s[j]){
            ++cnt;
          }
      
      if(cnt==s.size())
          ++l;
      
      }
/* after going through the code of another user 
   whose code got accepted , i found a new algorithm
   for searching year with distinct digits.
   his original code was :

https://codeforces.com/contest/271/submission/132712447

his code is highly efficient and less run time !!
*/
   //efficient algorithm(original by him)
   if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
   //efficient algorithm (borrowed from original to solve run time error )
   while(s[0]==s[1] || s[0]==s[2] || s[0]==s[3] 
                    || s[1]==s[2] || s[1]==s[3] 
                                  || s[2]==s[3]);
    /*rectified code which finally got accepted :
https://codeforces.com/contest/271/submission/132725540
*/
