/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:34 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-02 12:31:33
 */

#include <iostream>
#include <memory>
#include "Demo.hpp"
using namespace Reg;

int main()
{
 
    Demo* app=new Demo();
    app->Run();
    
    
    
    if (app!=nullptr) {
       delete app;
    }
    
    getchar();

    return 0;
}