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
