cmake_minimum_required(VERSION 3.0.0)
project(RegEngine VERSION 0.1.0)

#添加头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/TestDemo/Demo1/include)

#添加源文件目录
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/TestDemo)




add_executable(RegEngine main.cpp)
#设置可执行文件的输出目录
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)      
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

#链接静态库
TARGET_LINK_LIBRARIES(RegEngine RegEngineLib )
TARGET_LINK_LIBRARIES(RegEngine Demo1Lib )


