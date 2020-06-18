#ifndef SZOVEGDOBOZOSAPP_HPP_INCLUDED
#define SZOVEGDOBOZOSAPP_HPP_INCLUDED
#include "alkalkm.hpp"
#include "gorgos.hpp"
#include "muveletlista.hpp"
#include "widgetss.hpp"

class Szovegapp:public Application
{
protected:
    Gorgi* alapsz=new Gorgi(this,10,10,40,20,"nemkell");
    Gorgi* elsosz=new Gorgi(this,300,50,40,20,"nemkell");
    Gorgi* masodiksz=new Gorgi(this,300,100,40,20,"nemkell");
    Gorgi* harmadiksz=new Gorgi(this,300,150,40,20,"nemkell");
    Lista* elsom=new Lista(this,10,50,40,20,"nemkell");
    Lista* masodikm=new Lista(this,10,100,40,20,"nemkell");
    Lista* harmadikm=new Lista(this,10,150,40,20,"nemkell");
    int kijeloltid=0;
public:
    void event_loop();
    void action(std::string);
};


#endif // SZOVEGDOBOZOSAPP_HPP_INCLUDED
