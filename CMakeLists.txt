cmake_minimum_required(VERSION 3.8)
project(lab2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp HR.h Accounting.h Employee.cpp Employee.h Manager.cpp Manager.h TeamLeader.cpp TeamLeader.h Developer.cpp Developer.h CompanyStaff.cpp CompanyStaff.h)
add_executable(lab2 ${SOURCE_FILES})