#include "RLog.hpp"
#include <string>
#include <iostream>
namespace  Reg{

    RLog::RLog() {
    }

    RLog& RLog::getInstance() {
        static RLog instance;
        return instance;
    }

    void RLog::Log(std::string content){
        std::cout<<content<<std::endl;
    }
}

