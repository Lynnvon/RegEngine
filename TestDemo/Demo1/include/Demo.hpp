#pragma once
#include "RObject.hpp"
#include "RegEngine.hpp"
namespace Reg
{
    
    class Demo:public RObject {

    public:
        Demo();
        ~Demo();
        
        void Begin() override;
        void Tick() override;
        void Destory() override;
    
   
   
    };
} // Reg
