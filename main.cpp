#include <iostream>
#include"Coin.h"
#include"coin10.h"
#include"coin20.h"
#include"coin50.h"
#include <chrono>
#include <thread>
#include <vector>

using namespace std;
static double value=0;
void evaluateToss ( Coin * coin ) {

  if(coin->toss()){
    cout<<"HEAD!"<<endl;
   value+= coin->getValue();
    cout<<"current Total: "<<value<<endl;


  }

 cout<<"TAIL!"<<endl;
}
int main()
{
    bool Play_Again=true;
while(Play_Again){
        Play_Again=false;
    cout << "Hello world!" << endl;

   vector<Coin*> coins(3);
    coins[0] = new coin10();
    coins[1] = new coin20();
    coins[2] = new coin50();
bool flag=true;
while(flag){
        for(int i=0; i<3; i++){
    evaluateToss(coins[i]);
      std::this_thread::sleep_for(std::chrono::seconds(1));
 if(value==100) {cout<<"TOTAL: 100DA \n WINNER!!!"<<endl;
 flag=false;
 break;}
   else if(value>100) {cout<<"TOTAL EXEEDES 100DA \n LOST "<<endl;
   flag=false;
   break;
   }
}}
value=0;
int n;
cout<<"Play again? (1->yes/0->No)"<<endl;
cin>>n;
Play_Again=(n==0?0:1);
}

    return 0;
}
