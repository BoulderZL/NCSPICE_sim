# Install script for directory: /Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/ncspice_sim")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qucs-s/library/AnalogueCM" TYPE FILE FILES
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM/etd.mod"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM/etd.ifs"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM/FNXSPICECM.mod"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM/FNXSPICECM.ifs"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM/RFind.mod"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM/RFind.ifs"
    )
endif()

