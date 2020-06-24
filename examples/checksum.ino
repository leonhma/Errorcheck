/*
*   chechsum.cpp - A program for calculating checksums using the Errocheck library
*   version 1.0.0 written by leonhma on 24 June, 2020
*   released under GNU GPLv3 license
*/

#include <Arduino.h>
#include <stdint.h>
#include <Errorcheck.h>

Errorcheck chk;

String msg = "banana"; //checksum of 'banana' should be (609 | 00000011)

void setup() {
  Serial.begin(9600);
  Serial.println();

  uint8_t chars[msg.length()];
  msg.toCharArray((char *) chars, msg.length()+1);
  Serial.println("checksum example");
  Serial.print("checksum of \"");
  Serial.print((char *) chars);
  Serial.print("\" is: ");
  Serial.println((int) chk.checksum(chars, msg.length()));
}

void loop() {
}