/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:35:40 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:35:40 
 */

#include "RObject.hpp"
#include <iostream>
#include <RegCoreGlobal.hpp>
namespace Reg
{
    RObject::RObject(char* name) {

        REngine->Register(this);
        objName = name;
        std::cout<<objName<<" constructor"<<std::endl;

    }

    RObject::~RObject() {
        std::cout<<objName<<"Desstructor"<<std::endl;

    }

    void RObject::Begin(){
        std::cout<<objName<<"Begin"<<std::endl;
    }
   
    void RObject::Tick(){
        std::cout<<objName<<"Tick"<<std::endl;

    }
    void RObject::Destory(){

        REngine->UnRegister(this);

    }
}
