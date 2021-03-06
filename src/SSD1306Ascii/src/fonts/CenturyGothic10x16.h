

/*
 *
 * CenturyGothic10x16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : CenturyGothic10x16.h
 * Date                : 07.06.2020
 * Font size in bytes  : 10518
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
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

#ifndef _CenturyGothic10x16_H
#define _CenturyGothic10x16_H

#define CenturyGothic10x16_WIDTH 10
#define CenturyGothic10x16_HEIGHT 16

GLCDFONTDECL(CenturyGothic10x16) = {
    //0x29, 0x16, // size
    0x05, 0x84, // size
    0x0A,       // width
    0x10,       // height
    0x20,       // first char
    0xA2,       // char count

    // char widths
    0x04, 0x01, 0x04, 0x09, 0x08, 0x0B, 0x09, 0x01, 0x03, 0x02,
    0x05, 0x07, 0x02, 0x04, 0x02, 0x06, 0x08, 0x03, 0x08, 0x08,
    0x08, 0x08, 0x07, 0x07, 0x08, 0x07, 0x02, 0x02, 0x08, 0x08,
    0x08, 0x06, 0x0C, 0x0B, 0x06, 0x0B, 0x09, 0x06, 0x05, 0x0C,
    0x07, 0x01, 0x05, 0x06, 0x05, 0x0D, 0x08, 0x0C, 0x06, 0x0C,
    0x07, 0x07, 0x07, 0x07, 0x0B, 0x0D, 0x07, 0x09, 0x07, 0x03,
    0x09, 0x03, 0x09, 0x08, 0x02, 0x09, 0x09, 0x08, 0x09, 0x08,
    0x04, 0x09, 0x08, 0x01, 0x02, 0x06, 0x01, 0x0D, 0x08, 0x08,
    0x09, 0x09, 0x04, 0x05, 0x05, 0x08, 0x09, 0x0D, 0x08, 0x08,
    0x07, 0x05, 0x01, 0x05, 0x08, 0x08,

    0x08, 0x07, 0x03, 0x08, 0x0D, 0x07, //?? - ??
    0x08, 0x05, 0x0B, 0x0D, 0x06, 0x07, 0x05, 0x07, 0x0A, 0x04,

    0x09, 0x06, 0x06, 0x04,
    0x0A, 0x06, 0x0B, 0x06, 0x08, 0x08, 0x06, 0x09, 0x0B, 0x06,
    0x0A, 0x06, 0x06, 0x09, 0x05, 0x07, 0x0A, 0x07, 0x09, 0x07,
    0x0A, 0x0D, 0x09, 0x09, 0x06, 0x09, 0x0D, 0x07, 0x08, 0x07,
    0x05, 0x04, 0x08, 0x07, 0x0B, 0x05, 0x07, 0x07, 0x05, 0x08,
    0x0A, 0x06, 0x07, 0x07, 0x06, 0x07,

    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                             // 32
    0xFE, 0x1B,                                                                                                                                                 // 33
    0x1E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,                                                                                                             // 34
    0x10, 0x10, 0xF8, 0x16, 0x10, 0x10, 0xF8, 0x16, 0x10, 0x01, 0x1F, 0x01, 0x01, 0x01, 0x1F, 0x03, 0x01, 0x01,                                                 // 35
    0x00, 0x1C, 0x22, 0x42, 0xFF, 0x42, 0x84, 0x00, 0x04, 0x08, 0x10, 0x10, 0x7F, 0x10, 0x10, 0x0F,                                                             // 36
    0x1C, 0x22, 0x22, 0x22, 0x1E, 0xC2, 0x22, 0x1A, 0x06, 0x02, 0x00, 0x00, 0x10, 0x08, 0x06, 0x01, 0x00, 0x0E, 0x11, 0x11, 0x11, 0x0E,                         // 37
    0x00, 0x1C, 0xA2, 0xC2, 0x22, 0x1C, 0x00, 0x00, 0x00, 0x0E, 0x11, 0x10, 0x10, 0x11, 0x0A, 0x0C, 0x0C, 0x12,                                                 // 38
    0x1E, 0x00,                                                                                                                                                 // 39
    0xE0, 0x1C, 0x02, 0x1F, 0x60, 0x80,                                                                                                                         // 40
    0x06, 0xF8, 0xC0, 0x3F,                                                                                                                                     // 41
    0x24, 0x18, 0x7E, 0x18, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                 // 42
    0x80, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,                                                                         // 43
    0x00, 0x00, 0x60, 0x18,                                                                                                                                     // 44
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01,                                                                                                             // 45
    0x00, 0x00, 0x18, 0x18,                                                                                                                                     // 46
    0x00, 0x00, 0x00, 0xE0, 0x1C, 0x02, 0x40, 0x38, 0x07, 0x00, 0x00, 0x00,                                                                                     // 47
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                             // 48
    0x02, 0x02, 0xFE, 0x00, 0x00, 0x1F,                                                                                                                         // 49
    0x18, 0x04, 0x02, 0x02, 0x02, 0x82, 0x44, 0x38, 0x10, 0x18, 0x14, 0x12, 0x11, 0x10, 0x10, 0x10,                                                             // 50
    0x08, 0x04, 0x02, 0x42, 0x42, 0x44, 0xB8, 0x00, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                             // 51
    0x00, 0x00, 0x80, 0x60, 0x10, 0x08, 0xFE, 0x00, 0x02, 0x03, 0x02, 0x02, 0x02, 0x02, 0x1F, 0x02,                                                             // 52
    0x00, 0x70, 0x2E, 0x22, 0x22, 0x22, 0x42, 0x82, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                             // 53
    0x00, 0xC0, 0x60, 0x58, 0x44, 0x82, 0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07,                                                                         // 54
    0x02, 0x02, 0x02, 0xC2, 0x32, 0x0E, 0x02, 0x10, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x00,                                                                         // 55
    0x00, 0x98, 0x64, 0x42, 0x42, 0x64, 0x98, 0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                             // 56
    0x38, 0x44, 0x82, 0x82, 0x82, 0x84, 0x78, 0x00, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00,                                                                         // 57
    0x30, 0x30, 0x18, 0x18,                                                                                                                                     // 58
    0x30, 0x30, 0x60, 0x18,                                                                                                                                     // 59
    0x80, 0x80, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x00, 0x00, 0x01, 0x02, 0x02, 0x04, 0x04, 0x08,                                                             // 60
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,                                                             // 61
    0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x80, 0x80, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00,                                                             // 62
    0x0C, 0x82, 0x42, 0x22, 0x22, 0x9C, 0x00, 0x01, 0x02, 0x1A, 0x1A, 0x01,                                                                                     // 63
    0xF0, 0x08, 0x04, 0xC2, 0x22, 0x12, 0x12, 0xE2, 0x12, 0x04, 0x08, 0xF0, 0x03, 0x04, 0x08, 0x11, 0x12, 0x12, 0x12, 0x11, 0x12, 0x12, 0x09, 0x04,             // 64
    0x00, 0x00, 0x80, 0x60, 0x1C, 0x02, 0x1C, 0x60, 0x80, 0x00, 0x00, 0x10, 0x0E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0E, 0x10,                         // 65
    0xFE, 0x42, 0x42, 0x64, 0x98, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x08, 0x07,                                                                                     // 66
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x08, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x08, 0x04,                         // 67
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03,                                                 // 68
    0xFE, 0x42, 0x42, 0x42, 0x42, 0x42, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10,                                                                                     // 69
    0xFE, 0x42, 0x42, 0x42, 0x42, 0x1F, 0x00, 0x00, 0x00, 0x00,                                                                                                 // 70
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x82, 0x84, 0x84, 0x88, 0x80, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03,             // 71
    0xFE, 0x40, 0x40, 0x40, 0x40, 0x40, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                                         // 72
    0xFE, 0x1F,                                                                                                                                                 // 73
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x08, 0x10, 0x10, 0x08, 0x07,                                                                                                 // 74
    0xFE, 0x60, 0x90, 0x08, 0x04, 0x02, 0x1F, 0x00, 0x01, 0x02, 0x0C, 0x10,                                                                                     // 75
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10,                                                                                                 // 76
    0x00, 0xF8, 0x06, 0x38, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x38, 0x06, 0xF8, 0x00, 0x1C, 0x03, 0x00, 0x00, 0x01, 0x0E, 0x10, 0x0E, 0x01, 0x00, 0x00, 0x03, 0x1C, // 77
    0xFE, 0x08, 0x30, 0x40, 0x80, 0x00, 0x00, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x1F,                                                             // 78
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03,             // 79
    0xFE, 0x42, 0x42, 0x42, 0x24, 0x18, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                     // 80
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x11, 0x12, 0x0C, 0x08, 0x16, 0x21,             // 81
    0xFE, 0x42, 0xC2, 0x42, 0x42, 0x24, 0x18, 0x1F, 0x00, 0x00, 0x01, 0x06, 0x08, 0x10,                                                                         // 82
    0x00, 0x18, 0x24, 0x42, 0x42, 0x84, 0x08, 0x04, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07,                                                                         // 83
    0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,                                                                         // 84
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07,                                                                         // 85
    0x02, 0x1C, 0x60, 0x80, 0x00, 0x00, 0x00, 0x80, 0x60, 0x1C, 0x02, 0x00, 0x00, 0x00, 0x01, 0x0E, 0x10, 0x0E, 0x01, 0x00, 0x00, 0x00,                         // 86
    0x06, 0x78, 0x80, 0x00, 0x80, 0x78, 0x06, 0x78, 0x80, 0x00, 0x80, 0x78, 0x06, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, // 87
    0x06, 0x08, 0x30, 0xC0, 0x30, 0x08, 0x06, 0x18, 0x06, 0x01, 0x00, 0x03, 0x04, 0x18,                                                                         // 88
    0x02, 0x04, 0x18, 0x60, 0x80, 0x60, 0x18, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,                                                 // 89
    0x02, 0x02, 0x02, 0xC2, 0x32, 0x0E, 0x02, 0x10, 0x1C, 0x13, 0x10, 0x10, 0x10, 0x10,                                                                         // 90
    0xFE, 0x02, 0x02, 0xFF, 0x80, 0x80,                                                                                                                         // 91
    0x02, 0x0C, 0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x30, 0x40,                                                 // 92
    0x02, 0x02, 0xFE, 0x80, 0x80, 0xFF,                                                                                                                         // 93
    0x00, 0x80, 0x70, 0x0C, 0x02, 0x0C, 0x70, 0x80, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,                                                 // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,                                                             // 95
    0x02, 0x04, 0x00, 0x00,                                                                                                                                     // 96
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0xF0, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x1F,                                                 // 97
    0xFE, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                 // 98
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x20, 0x40, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04,                                                             // 99
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0xFE, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x1F,                                                 // 100
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x07, 0x09, 0x11, 0x11, 0x11, 0x11, 0x09, 0x05,                                                             // 101
    0x10, 0xFC, 0x12, 0x12, 0x00, 0x1F, 0x00, 0x00,                                                                                                             // 102
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0xF0, 0x27, 0x48, 0x90, 0x90, 0x90, 0x90, 0x90, 0x48, 0x3F,                                                 // 103
    0xFE, 0x20, 0x10, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                             // 104
    0xF6, 0x1F,                                                                                                                                                 // 105
    0x00, 0xF6, 0x80, 0x7F,                                                                                                                                     // 106
    0xFE, 0x00, 0x80, 0x40, 0x20, 0x10, 0x1F, 0x01, 0x02, 0x04, 0x08, 0x10,                                                                                     // 107
    0xFE, 0x1F,                                                                                                                                                 // 108
    0xF0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, // 109
    0xF0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                             // 110
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                             // 111
    0xF0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0xC0, 0xFF, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                 // 112
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0xF0, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0xFF,                                                 // 113
    0xF0, 0x20, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00,                                                                                                             // 114
    0x60, 0x90, 0x10, 0x10, 0x20, 0x08, 0x10, 0x11, 0x11, 0x0E,                                                                                                 // 115
    0x10, 0x10, 0xFE, 0x10, 0x10, 0x00, 0x00, 0x1F, 0x00, 0x00,                                                                                                 // 116
    0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                             // 117
    0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0x00, 0x00, 0x03, 0x0C, 0x10, 0x0C, 0x03, 0x00, 0x00,                                                 // 118
    0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, // 119
    0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x10, 0x08, 0x04, 0x03, 0x02, 0x04, 0x08, 0x10,                                                             // 120
    0x10, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x00, 0x00, 0x83, 0x7C, 0x0C, 0x03, 0x00, 0x00,                                                             // 121
    0x10, 0x10, 0x10, 0x10, 0xD0, 0x30, 0x10, 0x10, 0x18, 0x16, 0x11, 0x10, 0x10, 0x10,                                                                         // 122
    0x00, 0x80, 0xFC, 0x02, 0x02, 0x01, 0x02, 0x7E, 0x80, 0x80,                                                                                                 // 123
    0xFE, 0xFF,                                                                                                                                                 // 124
    0x02, 0x02, 0xFC, 0x80, 0x00, 0x80, 0x80, 0x7E, 0x02, 0x01,                                                                                                 // 125
    0x80, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                             // 126
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F,                                                             // 127

    0xC0, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0xFF, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07,                                                             // 1088
    0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08,                                                                         // 1089
    0x40, 0xC0, 0x40, 0x00, 0x1F, 0x00,                                                                                                                         // 1090
    0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x01, 0x86, 0x78, 0x18, 0x06, 0x01, 0x00,                                                             // 1091
    0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0xF8, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0xFF, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 1092
    0x40, 0x80, 0x00, 0x00, 0x00, 0x80, 0x40, 0x10, 0x08, 0x05, 0x02, 0x05, 0x08, 0x10,                                                                         // 1093
    0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x70,                                                             // 1094
    0xC0, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x02, 0x02, 0x02, 0x1F,                                                                                                 // 1095
    0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F,                         // 1096
    0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x70, // 1097
    0x40, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x12, 0x12, 0x12, 0x0C,                                                                                     // 1098
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x12, 0x12, 0x12, 0x0C, 0x00, 0x1F,                                                                         // 1099
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x12, 0x12, 0x12, 0x0C,                                                                                                 // 1100
    0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x08, 0x10, 0x10, 0x12, 0x12, 0x0A, 0x07,                                                                         // 1101
    0xC0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x1F, 0x02, 0x02, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07,                                     // 1102
    0x80, 0x40, 0x40, 0xC0, 0x19, 0x06, 0x02, 0x1F,                                                                                                             // 1103
    0x00, 0x00, 0x80, 0x70, 0x08, 0x70, 0x80, 0x00, 0x00, 0x10, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x03, 0x0E, 0x10,                                                 // 1040
    0xF8, 0x88, 0x88, 0x88, 0x88, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x0F,                                                                                     // 1041
    0xF8, 0x88, 0x88, 0x88, 0xF0, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x0F,                                                                                     // 1042
    0xF8, 0x08, 0x08, 0x08, 0x1F, 0x00, 0x00, 0x00,                                                                                                             // 1043
    0x00, 0x00, 0x80, 0x60, 0x18, 0x18, 0xE0, 0x00, 0x00, 0x00, 0x70, 0x1C, 0x13, 0x10, 0x10, 0x10, 0x10, 0x13, 0x1C, 0x70,                                     // 1044
    0xF8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10,                                                                                     // 1045
    0x08, 0x10, 0x20, 0x40, 0x80, 0xF8, 0x80, 0x40, 0x20, 0x10, 0x08, 0x10, 0x08, 0x06, 0x01, 0x00, 0x1F, 0x00, 0x01, 0x06, 0x08, 0x10,                         // 1046
    0x10, 0x08, 0x88, 0x88, 0x88, 0x70, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x0F,                                                                                     // 1047
    0xF8, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0xF8, 0x1F, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x1F,                                                             // 1048
    0xF8, 0x00, 0x01, 0x02, 0x82, 0x41, 0x20, 0xF8, 0x1F, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x1F,                                                             // 1049
    0xF8, 0xC0, 0x20, 0x10, 0x10, 0x08, 0x1F, 0x00, 0x01, 0x06, 0x08, 0x10,                                                                                     // 1050
    0x00, 0x00, 0x80, 0x70, 0x08, 0x70, 0x80, 0x00, 0x00, 0x10, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x01, 0x0E, 0x10,                                                 // 1051
    0xE0, 0x18, 0x60, 0x80, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0xE0, 0x1F, 0x00, 0x00, 0x03, 0x0C, 0x10, 0x0C, 0x03, 0x00, 0x00, 0x1F,                         // 1052
    0xF8, 0x80, 0x80, 0x80, 0x80, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                                                     // 1053
    0xC0, 0x20, 0x10, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20, 0xC0, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03,                                     // 1054
    0xF8, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                                                     // 1055
    0xF8, 0x88, 0x88, 0x88, 0x88, 0x70, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                     // 1056
    0xC0, 0x20, 0x10, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04,                                                 // 1057
    0x08, 0x08, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x1F, 0x00, 0x00,                                                                                                 // 1058
    0x18, 0x60, 0x80, 0x00, 0x80, 0x60, 0x18, 0x08, 0x10, 0x09, 0x06, 0x01, 0x00, 0x00,                                                                         // 1059
    0xE0, 0x10, 0x10, 0x10, 0xF8, 0x10, 0x10, 0x10, 0x10, 0xE0, 0x01, 0x02, 0x02, 0x02, 0x1F, 0x02, 0x02, 0x02, 0x02, 0x01,                                     // 1060
    0x08, 0x30, 0x40, 0x80, 0x40, 0x30, 0x08, 0x10, 0x0C, 0x02, 0x01, 0x02, 0x0C, 0x10,                                                                         // 1061
    0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x70,                                                 // 1062
    0x78, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                                         // 1063
    0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F,                                     // 1064
    0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x70, // 1065
    0x08, 0x08, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F,                                                 // 1066
    0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0xF8, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x00, 0x1F,                                                 // 1067
    0xF8, 0x80, 0x80, 0x80, 0x80, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x0F,                                                                                     // 1068
    0x30, 0x10, 0x08, 0x08, 0x88, 0x88, 0x90, 0xA0, 0xC0, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03,                                                 // 1069
    0xF8, 0x80, 0x80, 0xC0, 0x20, 0x10, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20, 0xC0, 0x1F, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03, // 1070
    0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0xF8, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x1F,                                                                         // 1071
    0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0xC0, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x1F,                                                             // 1072
    0xE0, 0x90, 0x48, 0x48, 0x48, 0x88, 0x08, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07,                                                                         // 1073
    0xC0, 0x40, 0x40, 0x40, 0x80, 0x1F, 0x12, 0x12, 0x12, 0x0D,                                                                                                 // 1074
    0xC0, 0x40, 0x40, 0x40, 0x1F, 0x00, 0x00, 0x00,                                                                                                             // 1075
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x70, 0x1C, 0x13, 0x10, 0x10, 0x13, 0x1C, 0x70,                                                             // 1076
    0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x07, 0x0A, 0x12, 0x12, 0x12, 0x12, 0x0B,                                                                         // 1077
    0x00, 0x40, 0x80, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x10, 0x08, 0x04, 0x05, 0x02, 0x1F, 0x02, 0x05, 0x04, 0x08, 0x10,                         // 1078
    0x80, 0x40, 0x40, 0x40, 0x80, 0x08, 0x10, 0x12, 0x12, 0x0D,                                                                                                 // 1079
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x1F, 0x08, 0x04, 0x02, 0x01, 0x00, 0x1F,                                                                         // 1080
    0xC0, 0x00, 0x08, 0x10, 0x10, 0x88, 0xC0, 0x1F, 0x08, 0x04, 0x02, 0x01, 0x00, 0x1F,                                                                         // 1081
    0xC0, 0x00, 0x00, 0x80, 0x40, 0x1F, 0x02, 0x05, 0x08, 0x10,                                                                                                 // 1082
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x10, 0x0C, 0x03, 0x00, 0x00, 0x03, 0x0C, 0x10,                                                             // 1083
    0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x07, 0x00, 0x07, 0x18, 0x18, 0x07, 0x00, 0x07, 0x18,                                     // 1084
    0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x02, 0x02, 0x02, 0x02, 0x1F,                                                                                     // 1085
    0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07,                                                                         // 1086
    0x00, 0x98, 0x58, 0x40, 0x58, 0x98, 0x00, 0x07, 0x0A, 0x12, 0x12, 0x12, 0x12, 0x0B,                                                                         // 1105
    0xC0, 0x40, 0x40, 0x40, 0x40, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                                                     // 1087

    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 1104

};

#endif
