/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:35:26 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:35:26 
 */

#include "RObjectBase.hpp"
#include <iostream>
namespace Reg{

    RObjectBase::RObjectBase() {
    }

    RObjectBase::~RObjectBase() {

    }
    void RObjectBase::Begin(){
        std::cout<<"this is objectBase Begin"<<std::endl;
    }
}