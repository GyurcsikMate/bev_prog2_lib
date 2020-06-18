#include "alkalkm.hpp"
#include "graphics.hpp"
#include "widgetss.hpp"

using namespace genv;
using namespace std;
void Application::registerWidget(Widget * widget)
{
    _widgets.push_back(widget);
}


