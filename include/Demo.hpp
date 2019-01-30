#pragma once
#include "RegEngine.hpp"
namespace Reg
{
    
    class Demo {

    public:
        Demo();
        ~Demo();
        void Run();

    private:
        RegEngine *engine;
    };
} // Reg
