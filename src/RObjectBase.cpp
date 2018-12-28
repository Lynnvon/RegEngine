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