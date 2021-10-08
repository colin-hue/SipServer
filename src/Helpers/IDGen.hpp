#ifndef IDGEN_HPP
#define IDGEN_HPP

#include <iostream>
#include <sstream>

class IDGen
{
public:
	IDGen() = delete;

    static std::string GenerateID(int len) {
        static const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";

        std::ostringstream id;
        for (int i = 0; i < len; ++i) {
            id << alphanum[rand() % (sizeof(alphanum) - 1)];
        }

        return id.str();
    }
};

#endif