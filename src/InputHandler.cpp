/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:38 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:37:38 
 */

#include "InputHandler.hpp"
#include <RegCoreGlobal.hpp>
namespace Reg
{
InputHandler::InputHandler()
{
}

InputHandler::~InputHandler()
{
}

void InputHandler::Tick()
{
    bRun = false;
}
} // namespace Reg
