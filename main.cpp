/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:34 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-31 17:04:20
 */

#include <iostream>
#include "RegEngine.hpp"
#include "Demo.hpp"
using namespace Reg;
int main()
{

    struct MainScope
    {
        RegEngine *app;
        MainScope()
        {
            app = new RegEngine();
            app->Run();
        }
        ~MainScope()
        {
            if (app != nullptr)
            {
                delete app;
                app = nullptr;
            }
        }
    } MainScopeGuard;

    getchar();
    return 0;
}