#include <gtest/gtest.h>
#include "../include/stb_image.h"
#include "../include/stb_image_write.h"
#include "../src/conversion.hpp"  

TEST(JPEGtoPNGConversionTest, TestConversion_Input1) {
    // Test case 1: empty_file.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/empty_file.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_1.png";
    const std::string outputPngFile = "files/png_output/png_image_1.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input2) {
    // Test case 2: jpeg_image_2.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_2.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_2.png";
    const std::string outputPngFile = "files/png_output/png_image_2.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}


TEST(JPEGtoPNGConversionTest, TestConversion_Input3) {
    // Test case 3: jpeg_image_3.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_3.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_3.png";
    const std::string outputPngFile = "files/png_output/png_image_3.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input4) {
    // Test case 4: jpeg_image_4.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_4.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_4.png";
    const std::string outputPngFile = "files/png_output/png_image_4.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input5) {
    // Test case 5: jpeg_image_5.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_5.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_5.png";
    const std::string outputPngFile = "files/png_output/png_image_5.png";
    
    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input6) {
    // Test case 6: jpeg_image_6.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_6.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_6.png";
    const std::string outputPngFile = "files/png_output/png_image_6.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input7) {
    // Test case 7: jpeg_image_7.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_7.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_7.png";
    const std::string outputPngFile = "files/png_output/png_image_7.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input8) {
    // Test case 8: jpeg_image_8.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_8.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_8.png";
    const std::string outputPngFile = "files/png_output/png_image_8.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input9) {
    // Test case 9: jpeg_image_9.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_9.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_9.png";
    const std::string outputPngFile = "files/png_output/png_image_9.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}

TEST(JPEGtoPNGConversionTest, TestConversion_Input10) {
    // Test case 10: jpeg_image_10.jpg conversion
    const std::string inputJpegFile = "files/jpeg_input/jpeg_image_10.jpg";
    const std::string expectedPngFile = "files/png_expected/png_expected_10.png";
    const std::string outputPngFile = "files/png_output/png_image_10.png";

    convertJPEGtoPNG(inputJpegFile, outputPngFile);

    int widthActual, heightActual, channelsActual;
    unsigned char* actualData = stbi_load(outputPngFile.c_str(), &widthActual, &heightActual, &channelsActual, STBI_rgb);

    int widthExpected, heightExpected, channelsExpected;
    unsigned char* expectedData = stbi_load(expectedPngFile.c_str(), &widthExpected, &heightExpected, &channelsExpected, STBI_rgb);

    ASSERT_TRUE(actualData != nullptr);
    ASSERT_TRUE(expectedData != nullptr);

    // Ensure both images have the same dimensions
    ASSERT_EQ(widthActual, widthExpected);
    ASSERT_EQ(heightActual, heightExpected);
    ASSERT_EQ(channelsActual, channelsExpected);

    // Compare individual pixels if dimensions match
    bool imagesMatch = true;
    if (widthActual == widthExpected && heightActual == heightExpected && channelsActual == channelsExpected) {
        size_t imageSize = widthActual * heightActual * channelsActual;
        imagesMatch = (memcmp(actualData, expectedData, imageSize) == 0);
    }

    stbi_image_free(actualData);
    stbi_image_free(expectedData);

    ASSERT_TRUE(imagesMatch);
}