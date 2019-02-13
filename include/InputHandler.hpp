/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:45 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-31 17:33:53
 */

#pragma once
#include <map>
#include <string>
#include <functional>
#include<RegCoreGlobal.hpp>
using namespace std;

namespace Reg
{
class InputHandler
{
  struct EventData
  {
    string actionName;
    void *function;
  };


public:
  InputHandler();
  ~InputHandler();
  void ReadInput();
  void BindAction(EventType, KeyCode,std::function<void()>);

private:
  int index;
  multimap<KeyCode, std::function<void()>> ButtonEventData;
  multimap<KeyCode, std::function<void()>> MouseEventData;
  multimap<KeyCode, std::function<void()>> GamePadEventData;
};
} // namespace Reg
