#include "coin20.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
coin20::coin20()
{
    //ctor
}

bool coin20::toss () const{
    srand(time(0));

  if(rand()%2==0){
std::cout<<"+20"<<std::endl;

        return true;
 } else{
std::cout<<"+0"<<std::endl;
 return false;
 }
}
         double coin20::getValue ()const{
          return 20.0;
         }
coin20::~coin20()
{
    //dtor
}
