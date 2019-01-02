/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:34 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-02 12:31:33
 */

#include <iostream>
#include <RegEngine.hpp>
#include <RegStatic.hpp>
#include <RObject.hpp>
#include <RegCoreGlobal.hpp>
#include <memory>
using namespace Reg;

int main() {

    

    RegEngine* reg = new RegEngine();
   
    RObject* r1=new RObject("r1");
    RObject* r2=new RObject("r2");   
    char* aa = "r3";
    auto ptr1 = std::make_shared<RObject>(aa);
    std::cout<<ptr1.use_count()<<std::endl;

    reg->Run();

    std::cout<<ptr1.use_count()<<std::endl;
  
    getchar();

    return 0;
}