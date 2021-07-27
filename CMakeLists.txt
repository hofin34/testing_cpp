cmake_minimum_required(VERSION 3.16)
project(TestCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)

OPTION(BRINGAUTO_PACKAGE "Package creation" OFF)
OPTION(BRINGAUTO_INSTALL "Disable install" OFF)
OPTION(BRINGAUTO_TESTS "Disable tests" OFF)

IF(BRINGAUTO_TESTS)
    ADD_SUBDIRECTORY(tests/)
ENDIF(BRINGAUTO_TESTS)

# CPACK: (after generating do "make package")
IF(BRINGAUTO_PACKAGE)
    set(_VERSION_MAJOR 1)
    set(_VERSION_MINOR 2)
    set(_VERSION_PATCH 3)
    set(CPACK_PACKAGE_VERSION_MAJOR "${_VERSION_MAJOR}")
    set(CPACK_PACKAGE_VERSION_MINOR "${_VERSION_MINOR}")
    set(CPACK_PACKAGE_VERSION_PATCH "${_VERSION_PATCH}")
    # Specify that CPack generates a deb package (it can also be other packages such as <.7z> <.zip> etc.)
    set(CPACK_GENERATOR "DEB")
    # Specify the package name
    set(CPACK_PACKAGE_NAME "demo_package")
    # Specify the program name, which is the name of the program after installation
    set(CPACK_DEBIAN_PACKAGE_NAME "demo_package")
    # Specify the operating computer architecture
    set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
    # Specify the required dependencies
    # set(CPACK_DEBIAN_PACKAGE_DEPENDS "libgrpc++")
    # Set the contact information of the package author
    set(CPACK_PACKAGE_CONTACT "supporter@gmail.com")
    # Set up maintainer
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "members of support@gmail.cn")
    # Specify the files to be installed
    INSTALL(TARGETS main
            RUNTIME DESTINATION /tmp/cmake_demo
            )

    include(CPack)
ENDIF()