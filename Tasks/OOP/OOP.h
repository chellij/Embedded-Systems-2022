#ifndef __OOP__
#define __OOP__

#include "mbed.h"

class OOP
{
    private:
    void samplePrivate();
    

    public:
    void samplePublic();

    //constructor
    OOP();

    //destructor
    ~OOP();

};

class Cat
{

};

class Protection
{
    public:
        int pub;
    protected:
        int prot;
    private:
        int priv;
};

class PublicChild : protected Protection
{
    //pub is protected
    //prot is protected
    //priv is not acessible
};

class PublicChild2 : public Protection
{
    //pub is public
    //prot is protected
    //priv is not accessible
};


#endif