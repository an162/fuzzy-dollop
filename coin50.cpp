#include "coin50.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
coin50::coin50()
{
    //ctor
}

bool coin50::toss () const{
srand(time(0));

  if(rand()%2==0){

std::cout<<"+50"<<std::endl;

        return true;
 } else{std::cout<<"+0"<<std::endl;
return false;
 }
}
         double coin50::getValue ()const{
          return 50.0;
         }
coin50::~coin50()
{
    //dtor
}
