#include<string>
#include "Util.h"
#include "Hand.h"
using namespace std;


class Deal
{
 private:
  Hand hand[4];
  //metadata
  int vulnerability;
  seat Dealer;
  //contract
  seat declarer;
  suit trump;
  //state of play
  int cards_played[4];
  seat seat_to_play;
  suit suit_led;
  int dec_tricks;
  int def_tricks;
  //state of DFS
  int nodes;
  
 public:
  Deal(string str);
 
};
  
