/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:35:26 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:35:26 
 */

#include "RObjectBase.hpp"
#include <iostream>
namespace Reg{   



    RObjectBase::~RObjectBase() {

    }
    void RObjectBase::Begin(){
        std::cout<<"this is objectBase Begin"<<std::endl;
    }
    void RObjectBase::Tick(){
        std::cout<<"this is objectBase Tick"<<std::endl;
    }
    void RObjectBase::Destory(){
        std::cout<<"this is objectBase Destroy"<<std::endl;
    }
}