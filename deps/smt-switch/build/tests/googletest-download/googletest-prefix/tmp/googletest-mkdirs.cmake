# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/jiongming/FORWORD_build/deps/smt-switch/build/tests/googletest-src")
  file(MAKE_DIRECTORY "/home/jiongming/FORWORD_build/deps/smt-switch/build/tests/googletest-src")
endif()
file(MAKE_DIRECTORY
  "/home/jiongming/FORWORD_build/deps/smt-switch/build/tests/googletest-build"
  "/home/jiongming/桌面/FORWORD/deps/smt-switch/build/tests/googletest-download/googletest-prefix"
  "/home/jiongming/桌面/FORWORD/deps/smt-switch/build/tests/googletest-download/googletest-prefix/tmp"
  "/home/jiongming/桌面/FORWORD/deps/smt-switch/build/tests/googletest-download/googletest-prefix/src/googletest-stamp"
  "/home/jiongming/桌面/FORWORD/deps/smt-switch/build/tests/googletest-download/googletest-prefix/src"
  "/home/jiongming/桌面/FORWORD/deps/smt-switch/build/tests/googletest-download/googletest-prefix/src/googletest-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/jiongming/桌面/FORWORD/deps/smt-switch/build/tests/googletest-download/googletest-prefix/src/googletest-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/jiongming/桌面/FORWORD/deps/smt-switch/build/tests/googletest-download/googletest-prefix/src/googletest-stamp${cfgdir}") # cfgdir has leading slash
endif()
