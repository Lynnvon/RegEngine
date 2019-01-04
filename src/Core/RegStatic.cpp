/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:35:53 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:35:53 
 */

#include "RegStatic.hpp"
namespace Reg
{
    RegStatic::RegStatic() {

    }

    RegStatic& RegStatic::getInstance() {
        static RegStatic instance;
        return instance;
    }
}

