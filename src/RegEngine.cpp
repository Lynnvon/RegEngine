#include "RegEngine.hpp"
#include <iostream>
#include <RegStatic.hpp>
#include <RObject.hpp>
#include <RegCoreGlobal.hpp>
#include <InputHandler.hpp>
using namespace std;
namespace Reg
{
float tickRate;
RegEngine::RegEngine()
{
    bRun = true;
    REngine = this;
    tickRate = 1;
}

RegEngine::~RegEngine()
{
}

void RegEngine::Register(RObject *rObject)
{
    
    Objs.push_back(rObject);
}
void RegEngine::UnRegister(RObject *rObject)
{
    std::cout<<rObject->objName<<std::endl;

    auto iter= Objs.cbegin();
    while( iter != Objs.cend()){
        if((*iter)->objName == rObject->objName){
            iter = Objs.erase(iter);
        }else{
            ++iter;
        }

    }
    //delete rObject;
  
}

void RegEngine::Run()
{
    struct Inner{
        Inner(){
            std::cout<<"this is jubu lei constructor"<<std::endl;

        }
        ~Inner(){
            std::cout<<"this is jubu lei "<<std::endl;
        }
    }InderGuard;
   
    Begin();
    Tick(tickRate);
}

void RegEngine::Begin()
{
    for (auto item : Objs)
    {
        item->Begin();
    }
}
//update
void RegEngine::Tick(float time)
{
    InputHandler* input=new InputHandler();
    while (bRun)
    {
        input->Tick();
        for (auto item : Objs)
        {
            item->Tick();
        }
    }
    Destory();
}
void RegEngine::Destory()
{
    for (auto item : Objs)
    {
        item->Destory();
    }
}

} // namespace Reg
