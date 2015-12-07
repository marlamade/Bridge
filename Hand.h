#ifndef HAND_H
#define HAND_H

#include<string>
#include "Util.h"
using namespace std;

class Hand
{
 private:
 public:

  string cards[4];
  int length[4];


  Hand(string str);
  Hand();
  void add_card(suit st, string rank);
  void remove_card(suit st, string rank);
};

#endif
  
