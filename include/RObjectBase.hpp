/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:38:20 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2018-12-28 15:39:52
 */

#pragma once

namespace Reg
{
    class RObjectBase {

        public:
            RObjectBase();
            ~RObjectBase();
        
            virtual void Begin()=0;
            virtual void Tick()=0;
            virtual void Destory()=0;
            
    };
        
}
