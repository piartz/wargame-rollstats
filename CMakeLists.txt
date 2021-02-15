cmake_minimum_required(VERSION 3.10)

# set the project name
project(wargame-rollstats)

# add the executable
add_executable(war src/main.c)

# includes
target_include_directories(war PUBLIC
                           "${PROJECT_BINARY_DIR}/include"
                           )

