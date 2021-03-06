# SPDX-License-Identifier: AGPL-3.0-or-later
# SPDX-FileCopyrightText: 2020 Danny Angelo Carminati Grein

set(PROJECT_NAME external_gfx)
project(${PROJECT_NAME})

set(EXTERNALGFX_PROJECT "${PROJECT_NAME}" CACHE INTERNAL "")
set(EXTERNALGFX_DIR "${PROJECT_SOURCE_DIR}" CACHE INTERNAL "")
set(EXTERNALGFX_INCLUDE "${CMAKE_SOURCE_DIR}" CACHE INTERNAL "")

file(GLOB EXTERNALGFX_HEADERS ${EXTERNALGFX_DIR}/*.h ${EXTERNALGFX_DIR}/imgui/*.h)

set(EXTERNALGFX_SRC
    gfxpp.cpp
    gfx.c
    imgui/imgui.cpp
    imgui/imgui_demo.cpp
    imgui/imgui_draw.cpp
    imgui/imgui_impl_sdl.cpp
    imgui/imgui_impl_opengl2.cpp
    imgui/imgui_impl_opengl3.cpp
    imgui/imgui_impl_dx11.cpp
    imgui/imgui_stdlib.cpp
    imgui/imgui_widgets.cpp
    imgui/imgui_spinner.cpp
    ui.cpp
)

add_library(${PROJECT_NAME} STATIC ${EXTERNALGFX_SRC} ${EXTERNALGFX_HEADERS})
target_include_directories(${PROJECT_NAME} PRIVATE ${SDL2_INCLUDE_DIR})
set_property(TARGET ${PROJECT_NAME} PROPERTY POSITION_INDEPENDENT_CODE ON)
# Remove warning from 3rd party compilation
if(MSVC)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE "-Wno-unused-function" "-Wno-float-equal" "-Wno-shadow")
    if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    else()
        # GCC
    endif()
endif()
