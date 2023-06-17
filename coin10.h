#ifndef COIN10_H
#define COIN10_H
#include "Coin.h"

class coin10 : public Coin
{
    public:
        coin10();
        virtual ~coin10();
         bool toss () const ; // head or tails

          double getValue () const;
    protected:

    private:
        double value;
};

#endif // COIN10_H
