/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:34 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-02 12:31:33
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