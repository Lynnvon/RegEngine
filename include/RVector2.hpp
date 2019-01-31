/*
 * @Author: Hailiang Feng 
 * @Date: 2019-01-02 12:31:05 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2019-01-02 12:31:05 
 */

#pragma once

#include "RPrerequisites.h"

namespace Reg
{

class RVector2
{
  public:
    float x, y;

  public:
    RVector2() = default;
    constexpr RVector2(float x, float y)
        : x(x), y(y)
    { }
    
    constexpr RVector2(R_ZERO)
        : x(0.0f), y(0.0f)
    { }    






    static const RVector2 ZERO;
    static const RVector2 ONE;
    static const RVector2 UNIT_X;
    static const RVector2 UNIT_Y;
};
} // namespace Reg
