#include <iostream>
#include <string>
#include <wsman.h>

#ifndef STEGANOGRAPHY_STEGANOGRAPHY_H
#defi

int string;
class Steganography {
public:
    explicit Steganography(const std::string &secretMessage, std unnamed) : secretMessage(secretMessage) {}
    // Pure virtual functions to be implemented by derived classes
    virtual void encode(const std::string& secretMessage, std::string coverImage) = 0;
    virtual std::string decode(const std::string& stegoImage) = 0;

    // Common method to set secret message
      void setMessage(std::string message) {
         std:string  = message;
    }

protected:
    std:string secretMessage;
};

#endif//STEGANOGRAPHY_STEGANOGRAPHY_H
