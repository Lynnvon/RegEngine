#include "RegStatic.hpp"
namespace Reg
{
    RegStatic::RegStatic() {

    }

    RegStatic& RegStatic::getInstance() {
        static RegStatic instance;
        return instance;
    }
}

