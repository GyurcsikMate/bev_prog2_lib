
#include "szovegdobozosapp.hpp"
//#include <string>
//#include "graphics.hpp"
//#include "gorgos.hpp"
//#include "muveletlista.hpp"
//#include "iostream"
using namespace std;
using namespace genv;


Szovegapp::Szovegapp()
{
    registerWidget(new Doboz(40,10,10,0,"nemkell"));
    registerWidget(new Gorgi(10,10,10,10,"alma"));
    registerWidget(new Lista(100,100,100,100,"alma"));
    registerWidget(new Szovi(50,30,50,40,"nemkell"));
    registerWidget(new Dinamik(50,30,50,40,"nemkell"));

}


/*
void Szovegapp::draw()
{
    alma->draw();
    zold->draw();
    gout<<refresh;
}
*/
void Szovegapp::event_loop()
{


//    cout<<_widgets.size();

/*    while(gin >> ev)
    {
        for(size_t i=0;i<_widgets.size();i++)
        {
            _widgets[i]->draw();
        }
    gout<<refresh;

    }*/
}


void Szovegapp::action(string akcio)
{

}

