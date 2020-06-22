#ifndef GOMB_HPP_INCLUDED
#define GOMB_HPP_INCLUDED
#include "widgetss.hpp"
using namespace std;

class Gombi:public Widget
{
    protected:
    function<void()>f;
public:
    Gombi(int , int, int , int ,string, function<void()> );
    void draw();
    void handle(int oldal);
    int xkereso();
    int ykereso();
    string kiekereso();
    void hatas();
};

///if(ev.type==ev_mouser and ev.button == btn_left)
///uygy kell hasznalni, hogy a konstruktorba egy lambda fgvt hivunk meg a kovetkezo keppen:
///[=](){fabulous(int a)},ahol fabolous az alkalmazasunk egyik tagfuggvenye
#endif // GOMB_HPP_INCLUDED
