/*
 * @Author: Hailiang Feng 
 * @Date: 2018-12-28 15:37:23 
 * @Last Modified by: Hailiang Feng
 * @Last Modified time: 2019-01-31 17:17:34
 */

#include "RegEngine.hpp"
#include <iostream>
#include "RegStatic.hpp"
#include "RObject.hpp"
#include "RegCoreGlobal.hpp"
#include "InputHandler.hpp"
using namespace std;
namespace Reg
{

RegEngine::RegEngine()
{
    bRun = true;
    GREngine = this;

}

RegEngine::~RegEngine()
{
    std::cout<<"Game Done"<<std::endl;
}

void RegEngine::Register(RObject *rObject)
{
    
    Objs.push_back(rObject);
}
void RegEngine::UnRegister(RObject* rObject)
{ 
    std::vector<RObject*> newObjs;
    for(auto item : Objs)
    {
        if (rObject->getName() == item->getName()) {
            continue;
        }
        newObjs.push_back(item);
    }
     
    Objs = newObjs;  
}

void RegEngine::Run()
{   
    Begin();
}

void RegEngine::Begin()
{
    for (auto item : Objs)
    {
        item->Begin();
    }
    Tick(1.0f);
}
//update
void RegEngine::Tick(float time)
{
    InputHandler* input=new InputHandler();
    input->BindAction(EventType::KeyBoard, KeyCode::ESC,"ESC press");
    input->BindAction(EventType::KeyBoard, KeyCode::ESC,"ESC press");
    while (bRun)
    {
        input->ReadInput();
        for (auto item : Objs)
        {
            item->Tick();
        }
    }
    if (input != nullptr) {
       delete input;
    }
    
    Destory();
}
void RegEngine::Destory()
{
  
    while(!Objs.empty()){
        RObject* item = Objs.front();
        item->Destory();
        UnRegister(item);
    }
    
}

} // namespace Reg
