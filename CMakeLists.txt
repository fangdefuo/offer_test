cmake_minimum_required(VERSION 3.6)
project(offer_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories( "/usr/include/eigen3" )

find_package(OpenCV  REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(Pangolin REQUIRED)

include_directories(
        ${PROJECT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/include
        #${EIGEN3_INCLUDE_DIR}
        ${Pangolin_INCLUDE_DIRS}
)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

#set(SOURCE_FILES offer_test.cpp)


#add_library(Listed List.cpp)
add_library(Listed_shared SHARED List.cpp)
add_library(BinaryTree_shared SHARED BinaryTree.cpp)
add_library(Tree_shared SHARED Tree.cpp)
add_library(Array_shared SHARED Array.cpp)
#add_library(Queue_shared SHARED Queue.h)

add_executable(offer_test offer_test.cpp)

target_link_libraries(offer_test Listed_shared)
target_link_libraries(offer_test BinaryTree_shared)
target_link_libraries(offer_test Tree_shared)
target_link_libraries(offer_test Array_shared)
#target_link_libraries(offer_test Queue_shared)

