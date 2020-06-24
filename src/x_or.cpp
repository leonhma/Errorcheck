/*
*   x_or.cpp - A program for calculating x-ors, included in Errorcheck library
*   version 1.0.0 written by leonhma on 24 June, 2020
*   released under GNU GPLv3 license
*/

#include "Errorcheck.h"
#include <stdint.h>

uint8_t Errorcheck::x_or(const uint8_t* data, const uint16_t& bytes) { //data can be 2 to 65.536 bytes
    _x_or_tmp = 0;
    for(uint16_t i = 0; i < bytes; i++) {
        _x_or_tmp ^= data[i];
    }
    return _x_or_tmp;
}