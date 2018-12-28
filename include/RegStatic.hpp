#pragma once


namespace Reg
{ 
    class RegStatic {

    public:
        static RegStatic& getInstance();
        
        RegStatic(RegStatic const&) = delete;
        void operator=(RegStatic const&) = delete;

        

    private:
        RegStatic();


    };
}
