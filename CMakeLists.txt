cmake_minimum_required(VERSION 3.16)
project(gpu_sim_portfolio CXX)

# --- Language / tooling ---------------------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)  # compile_commands.json for IDEs/clangd

# --- Warnings (Definition of Done: build with no warnings) ----------------
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra)
endif()

# --- AddressSanitizer option (you will need it in lesson P2) --------------
# Usage:  cmake -S . -B build -DSANITIZE=ON
option(SANITIZE "Enable AddressSanitizer (GCC/Clang)" ON)
if(SANITIZE AND NOT MSVC)
    add_compile_options(-fsanitize=address -g)
    add_link_options(-fsanitize=address)
endif()

# --- Main target (ticket PREP-1.1) -----------------------------------------
add_executable(hello src/main.cpp)

# --- Exercises: every exercises/*.cpp becomes its own executable -----------
# Drop a file exercises/p1_3_swap.cpp  ->  target "p1_3_swap" appears.
file(GLOB EXERCISE_SOURCES CONFIGURE_DEPENDS exercises/*.cpp)
foreach(src ${EXERCISE_SOURCES})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src})
endforeach()
