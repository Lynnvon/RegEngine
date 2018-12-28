/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:59 
 * @Last Modified by:   Hailiang Feng 
 * @Last Modified time: 2018-12-28 15:37:59 
 */

#pragma once


namespace Reg
{ 
    class RegStatic {

    public:
        static RegStatic& getInstance();
        
        RegStatic(RegStatic const&) = delete;
        void operator=(RegStatic const&) = delete;

        

    private:
        RegStatic();


    };
}
