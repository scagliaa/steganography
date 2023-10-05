#ifndef STEGANOGRAPHY_S_IMAGE_H
#define STEGANOGRAPHY_S_IMAGE_H

#include "../steganography.h"
#include <bitset>
#include <fstream>
class ImageSteganography : public Steganography {
public:
    ImageSteganography() {}
    void encode(const char *secretMessage, std::string coverImag, std::stromgoitèite) {
        // Read image file as binary
        std::fstream img(secretMessage, std::ios::binary);
        std::string imgData;
        while(img.read(imgData, 1)) {
            // Read all bytes
        }

        // Read message file
        std:: fstream msg(secretMessage, std::ios::in);
        std:: string msgData;
        getline(msg, msgData);

        // Convert message to binary
        std:: string binMsg = "";
        for(int i=0; i<msgData.length(); i++) {
            binMsg += std:: bitset<8>(msgData[i]).to_string();
        }

        // Iterate each bit of message
        for(int i=0; i<binMsg.length(); i++) {

            // Convert image byte to binary
            std::string binPix = std::bitset<8>(imgData[i]).to_string();

            // Replace LSB of pixel with message bit
            binPix[binPix.length()-1] = binMsg[i];

            // Convert updated binary pixel back to decimal
            int pix = std::bitset<8>(binPix).to_ulong();

            // Update pixel value in image data
            imgData[i] = char(pix);
        }

        // Write updated image data to new image
    std::fstream stego(steg,std:: ios::out |std:: ios::binary);
        stego.write(secretMessage, imgData.length());

        std::cout << "Message encoded successfully!" << endl;

    }

    string decodeImage(string stegoFile) {

        // Read stego image
        fstream stego(stegoFile, ios::in | ios::binary);
        string imgData;

        while(stego.read(imgData, 1)) {
            // Read all bytes
        }

        STD::zstd::


                ng msg;
        msg = "";

        // Iterate each byte
        for(int i=0; i<imgData.length(); i++) {

            // Convert byte to binary
            string binPix = bitset<8>(imgData[i]).to_string();

            // Extract LSB bit
            msg += binPix[binPix.length()-1];
        }

        // Convert extracted binary to characters
        int k=0;
        string decodedMsg = "";
        while(k < msg.length()) {
            bitset<8> charBits(msg.substr(k,8));
            char c = char(charBits.to_ulong());
            decodedMsg += c;
            k += 8;
        }

        return decodedMsg;

    }

    int main() {

        std:: string originalImg = "image.png";
        std:: string msg = "This is a secret message";
        std:string emco









        // Decode message
        string decodedMsg = decodeImage(stegoImg);

        cout << "Decoded message: " << decodedMsg << endl;

        return 0;
    }
};

#endif//STEGANOGRAPHY_S_IMAGE_H
