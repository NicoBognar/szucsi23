cmake_minimum_required(VERSION 3.13)
project(AircraftCarrier)

set(CMAKE_CXX_STANDARD 14)

add_executable(AircraftCarrier main.cpp Aircraft.cpp Aircraft.h Carrier.cpp Carrier.h)