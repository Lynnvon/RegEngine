/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:38:20 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2018-12-28 15:39:52
 */

#pragma once
#include "RVector2.hpp"
namespace Reg
{

    class RObjectBase
    {

      public:
        RObjectBase()=default;
        RObjectBase(char* name):Name(name){

        };
        virtual ~RObjectBase();
        virtual void Begin() = 0;
        virtual void Tick() = 0;
        virtual void Destory() = 0;
        inline char* getName(){return Name;}
        inline RVector2 getPosition(){return position;}
      protected:
        char* Name;
        RVector2 position;


    };

} // namespace Reg
