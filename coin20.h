#ifndef COIN20_H
#define COIN20_H
#include "Coin.h"

class coin20 : public Coin
{
    public:
        coin20();
        virtual ~coin20();
 virtual bool toss () const; // head or tails
        virtual double getValue () const;
    protected:

    private:

};

#endif // COIN20_H
