
#include "dinamo.hpp"

using namespace std;
using namespace genv;

Dinamik::Dinamik(int x, int y, int sx, int sy,string sztring):Widget(x, y, sx, sy,sztring)
{
//_parent->registerWidget(this);
kie=false;
osszes.push_back(" ");
}

void Dinamik::beolvaso(string fajl)
{

    string sor;
    string szo; //nem mukodik aaaaaaaaaaaaaaaaaaaaaaaa!
///ezt whileba kell majd rakni
    if(gout.twidth(sor+' '+szo)<= _size_x)
    {
        sor+=' '+szo;
         ///sor+=ev.keycode;// ezt majd az appba
    }
    else if(gout.twidth(sor+' '+szo)> _size_x)
    {
        osszes.push_back(sor);
        sor=szo+' ';
    }
}
//osszes.push_back(sor);



void Dinamik::draw()
{
    gout<<move_to(_x,_y)<<color(250,250,250)<<box(_size_x,_size_y);
    for(int i=0;i<=osszes.size()-1;i++)
    {
        gout<<move_to(_x,_y+i*gout.cascent()+2)<<text(osszes[i]);

    }
}
    void Dinamik::handle(int oldal)
    {
        oldal++;
    }
    int Dinamik::xkereso()
    {

        return _x;
    }
    int Dinamik::ykereso()
    {

        return _y;
    }
    string Dinamik::kiekereso()
    {

        return szoveg;
    }
    void Dinamik::hozzafuzo(string plusz)
    {
        if (osszes.size()==0)
        {
            osszes.push_back(plusz);
        }
        else if(gout.twidth(osszes[osszes.size()-1]+plusz)<=_size_x)
        {
            osszes[osszes.size()-1]+=plusz;
        }
        else if(gout.twidth(osszes[osszes.size()-1]+plusz)>_size_x)
        {
            osszes.push_back(plusz);
        }
    }
