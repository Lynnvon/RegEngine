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
