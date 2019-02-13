/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:38 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-31 17:27:44
 */

#include "InputHandler.hpp"
#include "RegCoreGlobal.hpp"
#include <conio.h>
using namespace std;
namespace Reg
{
InputHandler::InputHandler() : index(0)
{
    GRLog.Log("InputHandler Start");
}

InputHandler::~InputHandler()
{
    GRLog.Log("InputHandler Close");
}

//获取输入
void InputHandler::ReadInput()
{
    //_kbhit if there have value retun true else retune false
    if (_kbhit())
    {
        //_getch return current keyboard map number
        index = _getch();
        for (auto item : ButtonEventData)
        {
            if (item.first == (KeyCode)index)
            {
                item.second();
            }
        }
        for (auto item : MouseEventData)
        {
            if (item.first == (KeyCode)index)
            {
                item.second();
            }
        }
        for (auto item : GamePadEventData)
        {
            if (item.first == (KeyCode)index)
            {
                item.second();
            }
        }
    }
}
//绑定输入
void InputHandler::BindAction(EventType type, KeyCode keycode, std::function<void()> function)
{
    switch (type)
    {
    case EventType::KeyBoard:
        ButtonEventData.insert(pair<KeyCode, std::function<void()>>(keycode, function));
        break;
    case EventType::Mouse:
        MouseEventData.insert(pair<KeyCode, std::function<void()>>(keycode, function));
        break;
    case EventType::GamePad:
        GamePadEventData.insert(pair<KeyCode, std::function<void()>>(keycode, function));
        break;
    default:
        break;
    }
}
} // namespace Reg
