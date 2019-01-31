/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:49 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:37:49 
 */

#pragma once
#include <RegEngine.hpp>
#include <RLog.hpp>
namespace Reg
{
    extern bool bRun;
    extern int FPS;
    extern RegEngine* GREngine;
    extern float tickRate;
    extern RLog& GRLog;
} // namespace Reg
