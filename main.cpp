#include "graphics.hpp"
#include "widgetss.hpp"
#include "alkalkm.hpp"
#include "gorgos.hpp"
#include "statikusszovegdoboz.hpp"
#include "szovegdobozosapp.hpp"
using namespace std;
using namespace genv;


int main()
{
    gout.open(400,400);


    Szovegapp egyenlorecsakstatik;
    egyenlorecsakstatik.event_loop();
    return 0;
}
