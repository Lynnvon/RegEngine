/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:28 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:37:28 
 */

#include "RegCoreGlobal.hpp"
#include "RegEngine.hpp"
namespace Reg
{
    bool bRun = false;
    int FPS = 60;
    RegEngine* GREngine = nullptr;
    float tickRate = 1;
    RLog& GRLog = RLog::getInstance();
    
}