# Install script for directory: /Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qucs-s/library/XyceDigital" TYPE FILE FILES
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/A2DBRIDGE.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/AND4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/D2ABRIDGEX4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/INV.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/MUX8TO1.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/NOR4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/PATGENX128.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/XOR.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/A2DBRIDGEX2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/ANDOR4X2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/D2ABRIDGEX8.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/LOGIC0.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/NXOR.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/PATGENX2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/A2DBRIDGEX4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/BUF.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/FADDER.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/LOGIC1.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/NAND2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/OR2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/PATGENX32.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/A2DBRIDGEX8.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/D2ABRIDGE.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/GEN0OR1X4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/MUX2TO1.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/NAND4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/OR4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/PATGENX4.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/AND2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/D2ABRIDGEX2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/GEN0OR1X8.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/MUX4TO1.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/NOR2.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/PATGENX1.sym"
    "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs-lib/library/XyceDigital/PATGENX8.sym"
    )
endif()

