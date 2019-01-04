/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:55 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:37:55 
 */

#pragma once
#include <string.h>
#include <vector>
#include <RObject.hpp>
namespace Reg
{


class RegEngine
{

  public:
    RegEngine();
    ~RegEngine();

    void Run();
    void Register(RObject *rObject);
    void UnRegister(RObject *rObject);

  private:
    void Begin();
    void Tick(float time);
    void Destory();

    std::vector<RObject*> Objs;
};

/*
    *   global Variable
    */

extern float tickRate;
} // namespace Reg
