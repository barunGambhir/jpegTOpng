#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include <iostream>

#include "conversion.hpp"
#include "../include/stb_image.h"
#include "../include/stb_image_write.h"

void convertJPEGtoPNG(const std::string& jpegFilename, const std::string& pngFilename) {
    int width, height, channels;

    // Load the JPEG image using stb_image
    unsigned char *jpeg_data = stbi_load(jpegFilename.c_str(), &width, &height, &channels, STBI_rgb);
    if (!jpeg_data) {
        // Error handling if image loading fails
        std::cerr << "Error loading JPEG image: " << jpegFilename << std::endl;
        return;
    }

    // Write the loaded JPEG image as a PNG file using stb_image_write
    if (!stbi_write_png(pngFilename.c_str(), width, height, channels, jpeg_data, width * channels)) {
        // Error handling if writing PNG fails
        std::cerr << "Error writing PNG image: " << pngFilename << std::endl;
    }

    // Free memory allocated by stb_image
    stbi_image_free(jpeg_data);
    std::cout << "Conversion successful: JPEG to PNG" << std::endl;
}
