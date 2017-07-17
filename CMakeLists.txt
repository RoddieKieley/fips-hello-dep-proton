cmake_minimum_required(VERSION 2.8)

# include the fips main cmake file
get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

include_directories(inc)
include_directories(src)
include_directories(/usr/local/include)
include_directories(/home/rkieley/LocalProjects/usx/research/qpid-proton/proton-c/include)

fips_setup()
fips_project(fips-hello-dep-proton)
option(FIPS_EMSCRIPTEN_USE_FS "emscripten: enable FS module" ON)
fips_add_subdirectory(src/dep-proton)
fips_add_subdirectory(src/send)
fips_add_subdirectory(src/recv)
fips_finish()
#fips_libs(/home/rkieley/LocalProjects/usx/research/6/proton-c/libqpid-proton.so.bc.11.0.0)
#fips_libs(libqpid-proton)
#target_link_libraries(qpid-proton)
