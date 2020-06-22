#include "gomb.hpp"
using namespace genv;

Gombi::Gombi(int x, int y, int sx, int sy,string sztring,function<void()>fi):Widget(x, y, sx, sy,sztring),f(fi)
{
//_parent->registerWidget(this);


}

void Gombi::draw()
{
    gout<<move_to(_x,_y)<<color(250,250,250)<<box(_size_x,_size_y)<<move_to(_x,_y+gout.cascent()+2)<<color(100,100,0)<<text(szoveg);
}
void Gombi::handle(int oldal)
    {
        oldal++;
    }
    int Gombi::xkereso()
    {

        return _x;
    }
    int Gombi::ykereso()
    {

        return _y;
    }
    string Gombi::kiekereso()
    {

        return szoveg;
    }
void Gombi::hatas()
{
    f();
}
