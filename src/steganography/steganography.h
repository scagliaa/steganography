#include <iostream>
#include <string>
#include <wsman.h>

class Steganography {
public:
    explicit Steganography(const std::string &secretMessage, std::string coverImaged) : secretMessage(secretMessage) {}
    // Pure virtual functions to be implemented by derived classes
    virtual void encode(const std::string& secretMessage, std::string coverImage) = 0;
    virtual  std::string decode(const std::string& stegoImage) = 0;

    // Common method to set secret message
      void setMessage(const std::string& message) {
         secretMessage  = message;
    }

protected:
    std::string secretMessage;
};
