#ifndef COIN_H
#define COIN_H


class Coin
{
    public:
        Coin();
        virtual ~Coin();

        virtual bool toss () const = 0; // head or tails
        virtual double getValue () const = 0;


    protected:

    private:

};

#endif // COIN_H
