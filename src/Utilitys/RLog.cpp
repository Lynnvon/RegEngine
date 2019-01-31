/*
 * @Author: Hailiang Feng 
 * @Date: 2019-01-31 15:39:05 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-31 16:09:46
 */

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
    void RLog::Log(int content){
        std::cout<<content<<std::endl;
    }
}

