/*
 * @Author: Hailiang Feng 
 * @Date: 2019-01-31 15:39:12 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2019-01-31 15:39:12 
 */

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