cmake_minimum_required(VERSION 3.16.4)

project(SimpleTextParser VERSION 1.0)

configure_file(stpVersion.h.in stpVersion.h)

add_executable(stp
simpleTextParser.cpp
stpCLI.cpp
tokenDefinition.cpp
textTokenDefinition.cpp
)

target_include_directories(stp PUBLIC "${PROJECT_BINARY_DIR}")

