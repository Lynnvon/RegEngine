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
        RObject()=default;
        RObject(char* name);
    
        ~RObject() override;

        bool operator==(const RObject& oth)
        {
            return Name == oth.Name;
        }   

        void Begin() override;
        void Tick() override;
        void Destory() override;
       
    };
} // namespace Reg
