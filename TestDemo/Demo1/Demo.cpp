#include "Demo.hpp"
#include "RegEngine.hpp"
#include "RObject.hpp"
#include "RegCoreGlobal.hpp"
namespace Reg
{

Demo::Demo()
{
   
    GRLog.Log("Demo Start");

}

Demo::~Demo()
{
  
    GRLog.Log("Demo Finish");
}

void Demo::Begin(){
    GRLog.Log("Demo Begin");

}
void Demo::Tick(){
    GRLog.Log("Demo Tick");

}
void Demo::Destory(){
     GRLog.Log("Demo Destory");

}

} // namespace Reg