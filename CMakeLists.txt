cmake_minimum_required(VERSION 3.10)
project(CXBase VERSION 1.0.0 LANGUAGES C CXX)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/dist CACHE PATH "..." FORCE)
endif()

find_package(LuaCJson)
find_package(EZIO)
find_package(Nlohmann)

add_library(cxbase
    src/lua_net.cpp
    src/net_thread_queue.cpp
)

target_include_directories(cxbase
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)
target_link_libraries(cxbase PUBLIC EZIO::EZIO LuaCJson::LuaCJson Nlohmann)

include(cmake/HelperMacroFunction.cmake)
export_library_macro(cxbase CXBase CXBase:: lib/cmake/cxbase)
