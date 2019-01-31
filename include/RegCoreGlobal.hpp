/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:49 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-31 17:08:52
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

    enum EventType{
        KeyBoard=0,
        Mouse=1,
        GamePad=2
    };
    //键盘对应
    enum KeyCode{
        ESC = 27
        
    };
 
} // namespace Reg
