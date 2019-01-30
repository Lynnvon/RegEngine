/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:35:40 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:35:40 
 */

#include "RObject.hpp"
#include <iostream>
#include "RegCoreGlobal.hpp"
namespace Reg
{
    RObject::RObject(char* name):RObjectBase(name){
        REngine->Register(this);
        std::cout<<Name<<"---Register"<<std::endl;

    }

    RObject::~RObject() {
        std::cout<<Name<<"Destructor"<<std::endl;
    }

    void RObject::Begin(){
        std::cout<<Name<<"Begin"<<std::endl;
    }
   
    void RObject::Tick(){
        std::cout<<Name<<"Tick"<<std::endl;

    }
    void RObject::Destory(){
        std::cout<<Name<<"Destroy"<<std::endl;

    }
}
