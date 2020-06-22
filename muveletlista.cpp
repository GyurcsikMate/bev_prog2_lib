
//#include "alkalkm.hpp"
//#include "widgetss.hpp"
//#include "graphics.hpp"
#include "muveletlista.hpp"
//#include <string>
//#include <fstream>
//#include <vector>



Lista::Lista(int x, int y, int sx, int sy,string sztring):Widget(x, y, sx, sy,sztring)
{
//_parent->registerWidget(this);

kie=0;
}




void Lista::draw()
{
    vector<string>osszes={"plus","minus","multiply","divide","power"};
    gout<<move_to(_x,_y)<<color(100,100,100)<<box(_size_x,_size_y)<<color(200,200,0)<<move_to(_x,_y+12)<<text(osszes[kie]);
}
    void Lista::handle(int oldal)
    {
        if(kie<=osszes.size()-1)
        {
            kie+=oldal;
        }
        else if(kie==osszes.size()-1 and oldal==1)
        {
            kie=0;

        }
        else if(kie==0 and oldal==-1)
        {
            kie=osszes.size();

        }
    }
    int Lista::xkereso()
    {

        return _x;
    }
    int Lista::ykereso()
    {

        return _y;
    }
    string Lista::kiekereso()
    {
        return osszes[kie];
    }

