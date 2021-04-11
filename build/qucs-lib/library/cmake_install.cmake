# Install script for directory: /Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qucs-s/library" TYPE FILE FILES
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/AnalogueCM.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Bridges.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Diodes.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Ideal.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/JFETs.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/LEDs.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/MOSFETs.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/NMOSFETs.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/OpAmps.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/PMOSFETs.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Regulators.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Substrates.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Transistors.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Varistors.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Z-Diodes.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/SpiceOpamp.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Transformers.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Xanalogue.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/MESFETs.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/Xyce_Digital_TTL_Technology.lib"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/qucs.blacklist"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/ngspice.blacklist"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/xyce.blacklist"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs-lib/library/AnalogueCM/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs-lib/library/MESFETs/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs-lib/library/XyceDigital/cmake_install.cmake")

endif()

