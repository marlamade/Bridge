#include<iostream>
#include "Util.h"
#include "Deal.h"
#include "Hand.h"
using namespace std;


int main()
{
  cout<<"Maggles!"<<endl;
  suit trump = C;
  seat declarer = No;
  seat dealer = So;
  cout<<(declarer%2 == dealer%2)<<endl;
  
  Deal d("A6.J.964.Q864 J87.64.QT732. Q9532..A85.AJ KT4.52.KJ.932");
  //Hand h("..AK.5");
  Hand h = d.hand[2];
  
  for(int i=0; i<4; i++)
    {
      cout<<h.cards[i]<<endl;
    }
}
