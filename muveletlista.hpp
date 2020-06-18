#ifndef MUVELETLISTA_HPP_INCLUDED
#define MUVELETLISTA_HPP_INCLUDED
#include "alkalkm.hpp"
#include "widgetss.hpp"
#include "graphics.hpp"
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Lista:public Widget
{
    protected:
    vector<string>osszes;
    int kie=0;
public:
    Lista(Application *,int , int, int , int ,string );
    void draw();
    void handle(int oldal);
    int xkereso();
    int ykereso();
    string kiekereso();


};


#endif // MUVELETLISTA_HPP_INCLUDED
