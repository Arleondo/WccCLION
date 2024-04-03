<<<<<<< HEAD:Clase_Cc2_3-04/cmake-build-debug/cmake_install.cmake
# Install script for directory: D:/Trabajos2/WccCLION/Clase_Cc2_3-04
=======
# Install script for directory: D:/Trabajos2xd/WccCLION
>>>>>>> 0dbf813b10cad218b94b7b910ce227d3bd6dab63:cmake-build-debug/cmake_install.cmake

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Clase_Cc2_3_04")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Program Files/JetBrains/CLion 2023.2.2/bin/mingw/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD:Clase_Cc2_3-04/cmake-build-debug/cmake_install.cmake
file(WRITE "D:/Trabajos2/WccCLION/Clase_Cc2_3-04/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "D:/Trabajos2xd/WccCLION/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 0dbf813b10cad218b94b7b910ce227d3bd6dab63:cmake-build-debug/cmake_install.cmake
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
