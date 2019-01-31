#include "Demo.hpp"
#include "RegEngine.hpp"
#include "RObject.hpp"
namespace Reg
{

Demo::Demo()
{
    engine = new RegEngine();
}

Demo::~Demo()
{
    if (engine!=nullptr) {
         delete engine;
    }    
}

void Demo::Run()
{
    RObject r1("1");
    RObject r2("2");
    RObject r3("3");
    RObject r4("4");
    engine->Run();
}

} // namespace Reg