#include "Hand.h"
#include<iostream>
using namespace std;

Hand::Hand(string str)
{
  string s = str;
  int cur = 3;
  do
    {
      int pos = s.find(".");
      if (pos == 80)
	{
	  cerr<<"delimiter not found"<<endl;
	  return;
	}
      cards[cur] = s.substr(0, pos);
      s = s.substr(pos+1, s.length());
      cur--; 
    }
  while(cur>=0);
}

Hand::Hand()
{
  return;
}

void Hand::add_card(suit st, string rank)
{
  cards[st].append(string(rank));
  //sort?
}

void Hand::remove_card(suit st, string rank)
{
  int pos = cards[st].find(rank);
  cards[st].erase(pos,1);
}

