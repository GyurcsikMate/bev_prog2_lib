#ifndef ALKALKM_HPP_INCLUDED
#define ALKALKM_HPP_INCLUDED

#include <string>
#include <vector>
using namespace std;
class Widget;

class Application
{
protected:
    std::vector<Widget *> _widgets;
public:
        virtual ~Application(){}
        void registerWidget(Widget * widget);
        virtual void event_loop()=0;
        virtual void action(string)=0;

};

#endif // ALKALKM_HPP_INCLUDED
