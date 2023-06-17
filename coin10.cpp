#include "coin10.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
coin10::coin10()
{
    //ctor
}

bool coin10::toss () const  {

    srand(time(0));

  if(rand()%2==0){
        cout<<"+10"<<endl;

     return true;
 } else{
     cout<<"+0"<<endl;
return false;
 }
}
         double coin10::getValue () const{

         return 10.0;
         }
coin10::~coin10()
{
    //dtor
}
