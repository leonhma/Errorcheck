/*
*   Errorcheck - A library with errorcheck features, such as xor, checksum
*   version 1.0.0 written by leonhma on 24 June, 2020
*   released under GNU GPLv3 license
*/

#pragma once
#include <stdint.h>

class Errorcheck
{
public:
    uint8_t x_or(const uint8_t* data, const uint16_t& bytes);
    uintmax_t checksum(const uint8_t* data, const uint16_t& bytes);
private:
    uint8_t _x_or_tmp;
    uintmax_t _checksum;
};
