# Install script for directory: /Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY FILES "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/qucs-s.app" USE_SOURCE_PERMISSIONS)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/qucs-s.app/Contents/MacOS/plugins" TYPE DIRECTORY FILES "/usr/local/lib/qt4/plugins/imageformats")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  
    file(WRITE "${CMAKE_INSTALL_PREFIX}/bin/qucs-s.app/Contents/Resources/qt.conf" "")
    
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimex" OR NOT CMAKE_INSTALL_COMPONENT)
  
    file(GLOB_RECURSE QTPLUGINS
      "${CMAKE_INSTALL_PREFIX}/bin/qucs-s.app/Contents/MacOS/plugins/*.dylib")
    include(BundleUtilities)
    fixup_bundle("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/ncspice_sim/bin/qucs-s.app" "${QTPLUGINS}" "")
    
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/qucs_s/qucs/qucs-s.1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/components/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/diagrams/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/dialogs/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/octave/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/python/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/paintings/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/extsimkernels/cmake_install.cmake")
  include("/Users/boulderzl/Dropbox/Air Team Folder/Simulation/NCSPICE/build/qucs/spicecomponents/cmake_install.cmake")

endif()

