#ifndef STEGANOGRAPHY_S_IMAGE_H
#define STEGANOGRAPHY_S_IMAGE_H

#include "../steganography.h"
#include <bitset>
#include <fstream>
using  namespace std;

class ImageSteganography : public Steganography {
    static std::string readImageBytes(string imageFile) {
        std::fstream img(imageFile, std
                         : ios::in | std
                         : ios::binary);
        if (!img.is_open()) {
            std::cout << "Error opening image file" << std::endl;
            return "";
        }
        std::string imgData;
        img.seekg(0, std::ios::end);

        int length = img.tellg();

        img.seekg(0, std::ios::beg);

        imgData.resize(length);
        img.read(&imgData[0], length);
        img.close();

        return imgData;
    }

public:
    void encode(const char *secretMessage, std::string coverImage) override {

    };
    std::string decode(const std::string& stegoImag) override {

    };
}

