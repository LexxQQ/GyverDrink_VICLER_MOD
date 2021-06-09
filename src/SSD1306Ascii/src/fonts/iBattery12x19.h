

/*
 *
 * Battery12x19
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : iBattery12x19.h
 * Date                : 23.09.2020
 * Font size in bytes  : 1380
 * Font width          : 19
 * Font height         : 12
 * Font first char     : 48
 * Font last char      : 54
 * Font used chars     : 6
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef IBATTERY12X19_H
#define IBATTERY12X19_H

#define IBATTERY12X19_WIDTH 19
#define IBATTERY12X19_HEIGHT 12

static const uint8_t iBattery12x19[] PROGMEM = {
    0x05, 0x64, // size
    0x13, // width
    0xC, // height
    0x30, // first char
    0x06, // char count
    
    // char widths
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 
    
    // font data
    0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF0, 0x70, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x70, 0x10, // 48
    0xFC, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF0, 0x70, 0xF0, 0xC0, 0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x70, 0x10, // 49
    0xFC, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF0, 0x70, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x70, 0x10, // 50
    0xFC, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF0, 0x70, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x70, 0x10, // 51
    0xFC, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF0, 0x70, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0x70, 0x10, // 52
    0xFC, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0x06, 0x06, 0xFE, 0xFC, 0xF0, 0x70, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0xF0, 0x70, 0x10 // 53
    
};

#endif
