#pragma once
#include <string>
namespace Reg
{
    
    class RLog {

    public:
        static RLog& getInstance();
        
        RLog(RLog const&) = delete;
        void operator=(RLog const&) = delete;

        void Log(std::string content);

    private:
        RLog();
    };
}