#include "Deal.h"
#include<iostream>
using namespace std;


Deal::Deal(string str)
{
  string s = str;
  int cur = 0;
  do
    {
      int pos = s.find(" ");
      hand[cur] = Hand(s.substr(0, pos));
      s = s.substr(pos+1, s.length());
      cur++; 
    }
  while(cur<4);

}



