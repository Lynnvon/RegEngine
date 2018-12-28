/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:38:03 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:38:03 
 */

#pragma once
#include <RObjectBase.hpp>

namespace Reg
{
class RObject : public RObjectBase
{

  public:
    RObject(char* name);
    ~RObject();
    bool operator==(const RObject& r)
    {
        return objName == r.objName;
    }   
 void Begin();
    void Tick();
    void Destory();
    char *objName;
};
} // namespace Reg
