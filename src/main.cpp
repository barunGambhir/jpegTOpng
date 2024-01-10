#include <iostream>
#include "conversion.hpp"

int main() {
    // Example usage of convertJPEGtoPNG function
    // Refer to tests for elaborate testing 
    const std::string inputJpegFile = "../tests/files/input/input.jpg"; 
    const std::string outputPngFile = "../tests/files/output/output.png";

    // Calling the conversion function
    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    return 0;
}
