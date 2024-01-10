# JPEG to PNG Conversion Project

## Overview
This C++ project aims to facilitate JPEG to PNG image format conversion. Leveraging modern C++ standards and the STB Image library, it ensures efficient image handling and accurate transformation.

## Installing
To use the project, clone the repository:

    git clone https://github.com/barunGambhir/jpegTOpng.git
    cd jpeg-to-png

## Build
To build the project, execute the following commands:

    mkdir build
    cd build
    cmake ..
    make
    
    

## Running Tests

    cd build
    ./conversion_tests



## AFLplusplus Integration
For American Fuzzy Lop (AFLplusplus) fuzz testing:

1. Install AFLplusplus on your system using the docs on https://aflplus.plus/docs/install/


## STB Image Library

This project utilizes the STB Image library by Sean Barrett for image loading and handling.

The STB Image library is created by Sean Barrett and is available at: [STB Image GitHub Repository](https://github.com/nothings/stb)

STB Image is distributed under the public domain (see the [LICENSE](https://github.com/nothings/stb/blob/master/LICENSE) file for details). The library is freely available for use without any restrictions, but it's good practice to provide attribution to the library's author.
