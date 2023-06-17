#ifndef COIN50_H
#define COIN50_H
#include "Coin.h"

class coin50: public Coin
{
    public:
        coin50();
        virtual ~coin50();
virtual bool toss () const; // head or tails
        virtual double getValue ()const;
    protected:

    private:

};

#endif // COIN50_H
