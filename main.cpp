#include "graphics.hpp"
#include "szovegdobozosapp.hpp"
using namespace std;
using namespace genv;

/// gorgos.hpp - Gorgi szambeallito valamilyen esemenyre(novel vagy csokkent)
///muveletlista.hpp - Lista egy vectorban váltogat az elemek kozott
//dinamo.hpp - Dinamik igazabol meg nem igazan jo, majd dinamikus szovegkezelo kene hogy legyen
///dobi.hpp - Doboz igaz - hamis doboz
///statikusszovegdoboz.hpp - Szovi ez tóegyértelmû
int main()
{
    gout.open(400,400);
    event ev;
    Szovegapp balta;
    balta.draw();

    while(gin>>ev)
    {

    }
    //Szovegapp egyenlorecsakstatik;
    //egyenlorecsakstatik.event_loop(ev);
    return 0;
}
