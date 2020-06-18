#include "szovegdobozosapp.hpp"
#include <string>
#include "graphics.hpp"
#include "gorgos.hpp"
#include "muveletlista.hpp"
#include "iostream"
using namespace std;
using namespace genv;




void Szovegapp::event_loop()
{
    event ev;

    cout<<_widgets.size();

    while(gin >> ev)
    {
        for(size_t i=0;i<_widgets.size();i++)
        {
            _widgets[i]->draw();
        }
    gout<<refresh;

    }
}


void Szovegapp::action(string akcio)
{

}
