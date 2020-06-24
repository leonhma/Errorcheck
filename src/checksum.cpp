/*
*   chechsum.cpp - A program for calculating checksums, included in Errorcheck library
*   version 1.0.0 written by leonhma on 24 June, 2020
*   released under GNU GPLv3 license
*/


#include "Errorcheck.h"
#include <stdint.h>

uintmax_t Errorcheck::checksum(const uint8_t* data, const uint16_t& bytes) { //data can be 2 to 65.536 bytes
    _checksum = 0;
    for(uint16_t i = 0; i < bytes; i++)  {
        _checksum += data[i];
    }
    return _checksum;
}