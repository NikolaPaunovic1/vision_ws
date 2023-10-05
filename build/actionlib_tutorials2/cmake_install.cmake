# Install script for directory: /home/sopho/catkin_ws/src/actionlib_tutorials2

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sopho/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/actionlib_tutorials2/action" TYPE FILE FILES "/home/sopho/catkin_ws/src/actionlib_tutorials2/action/Fibonacci.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/actionlib_tutorials2/msg" TYPE FILE FILES
    "/home/sopho/catkin_ws/devel/share/actionlib_tutorials2/msg/FibonacciAction.msg"
    "/home/sopho/catkin_ws/devel/share/actionlib_tutorials2/msg/FibonacciActionGoal.msg"
    "/home/sopho/catkin_ws/devel/share/actionlib_tutorials2/msg/FibonacciActionResult.msg"
    "/home/sopho/catkin_ws/devel/share/actionlib_tutorials2/msg/FibonacciActionFeedback.msg"
    "/home/sopho/catkin_ws/devel/share/actionlib_tutorials2/msg/FibonacciGoal.msg"
    "/home/sopho/catkin_ws/devel/share/actionlib_tutorials2/msg/FibonacciResult.msg"
    "/home/sopho/catkin_ws/devel/share/actionlib_tutorials2/msg/FibonacciFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/actionlib_tutorials2/cmake" TYPE FILE FILES "/home/sopho/catkin_ws/build/actionlib_tutorials2/catkin_generated/installspace/actionlib_tutorials2-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/sopho/catkin_ws/devel/include/actionlib_tutorials2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/sopho/catkin_ws/devel/share/roseus/ros/actionlib_tutorials2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/sopho/catkin_ws/devel/share/common-lisp/ros/actionlib_tutorials2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/sopho/catkin_ws/devel/share/gennodejs/ros/actionlib_tutorials2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/sopho/catkin_ws/devel/lib/python3/dist-packages/actionlib_tutorials2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/sopho/catkin_ws/devel/lib/python3/dist-packages/actionlib_tutorials2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sopho/catkin_ws/build/actionlib_tutorials2/catkin_generated/installspace/actionlib_tutorials2.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/actionlib_tutorials2/cmake" TYPE FILE FILES "/home/sopho/catkin_ws/build/actionlib_tutorials2/catkin_generated/installspace/actionlib_tutorials2-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/actionlib_tutorials2/cmake" TYPE FILE FILES
    "/home/sopho/catkin_ws/build/actionlib_tutorials2/catkin_generated/installspace/actionlib_tutorials2Config.cmake"
    "/home/sopho/catkin_ws/build/actionlib_tutorials2/catkin_generated/installspace/actionlib_tutorials2Config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/actionlib_tutorials2" TYPE FILE FILES "/home/sopho/catkin_ws/src/actionlib_tutorials2/package.xml")
endif()

