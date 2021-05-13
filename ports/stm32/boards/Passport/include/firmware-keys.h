// SPDX-FileCopyrightText: 2020 Foundation Devices, Inc. <hello@foundationdevices.com>
// SPDX-License-Identifier: GPL-3.0-or-later
//
// SPDX-FileCopyrightText: 2018 Coinkite, Inc. <coldcardwallet.com>
// SPDX-License-Identifier: GPL-3.0-only
//
#ifndef _FW_KEYS_H_
#define _FW_KEYS_H_

#define FW_MAX_PUB_KEYS     4
#define FW_PUBLIC_KEY_SIZE  64
#define FW_USER_KEY         255

static const uint8_t approved_pubkeys[FW_MAX_PUB_KEYS][FW_PUBLIC_KEY_SIZE] = {
    { // Key: 00-pub.bin
        0xdd, 0x60, 0x31, 0xc6, 0x40, 0x98, 0x99, 0xcf, 0x7f, 0x7b, 0xc3, 0x47, 0x96, 0xac, 0x92, 0xe4,
        0x44, 0x36, 0x59, 0x53, 0x49, 0x9b, 0x94, 0x36, 0xfc, 0x94, 0x40, 0x59, 0xc4, 0x9b, 0x0e, 0x6a,
        0x45, 0x91, 0x29, 0x8c, 0xa8, 0x36, 0x7e, 0x3a, 0x14, 0xe5, 0x13, 0x72, 0xb2, 0x74, 0xf3, 0xe8,
        0x07, 0x1b, 0x21, 0xfd, 0x3d, 0xed, 0xd7, 0xa2, 0xe2, 0x7b, 0xe8, 0x94, 0x4c, 0x02, 0x7e, 0x01
    },
    { // Key: 01-pub.bin
        0xc6, 0xcd, 0xf9, 0xf6, 0x35, 0x31, 0xe7, 0x67, 0x5b, 0x55, 0x35, 0x9e, 0xb7, 0xe5, 0xca, 0x1f,
        0xb9, 0x84, 0x76, 0x54, 0x02, 0xc4, 0xac, 0xb1, 0x53, 0x5e, 0xcb, 0x5b, 0xd9, 0xd7, 0xb5, 0x8e,
        0x81, 0xe1, 0x51, 0xa6, 0xc5, 0xbe, 0x87, 0x94, 0xa9, 0x9c, 0x6f, 0x82, 0xb0, 0xe3, 0xb4, 0x53,
        0x04, 0xf0, 0xa0, 0x48, 0x7b, 0xb2, 0x2a, 0xe2, 0x1d, 0x26, 0xfa, 0xb7, 0x18, 0xb9, 0x32, 0xf9
    },
    { // Key: 02-pub.bin
        0xea, 0xe2, 0xa4, 0xf7, 0x90, 0x3f, 0xc7, 0xa6, 0x02, 0x58, 0x1f, 0x16, 0x36, 0x49, 0xba, 0xbb,
        0x72, 0xf4, 0xd3, 0x58, 0x8a, 0x2a, 0xd0, 0x34, 0xae, 0x63, 0xbd, 0x18, 0x9e, 0xb0, 0x9c, 0xe9,
        0x19, 0xce, 0x27, 0xc1, 0x40, 0x15, 0x91, 0xbc, 0x56, 0x64, 0xf5, 0x8d, 0x70, 0xb1, 0x38, 0x28,
        0x77, 0x50, 0x80, 0xb1, 0x3d, 0x0f, 0x93, 0xe6, 0xc8, 0xa9, 0x83, 0xe8, 0x70, 0xc2, 0xbe, 0xad
    },
    { // Key: 03-pub.bin
        0xca, 0x32, 0xae, 0xb0, 0xf2, 0x25, 0x7f, 0xa2, 0x0c, 0xac, 0x3a, 0x56, 0xa5, 0x8b, 0x97, 0xde,
        0x99, 0x30, 0xef, 0x14, 0xfd, 0xd6, 0x90, 0x5d, 0x6d, 0x6e, 0x40, 0xb8, 0x30, 0x98, 0xc1, 0x3e,
        0x99, 0x77, 0x25, 0xdb, 0x1c, 0xbe, 0x4d, 0x9b, 0x1b, 0x8a, 0x54, 0x63, 0x0e, 0x89, 0x4b, 0x3e,
        0x23, 0x52, 0x2e, 0x5e, 0x14, 0xf3, 0x7e, 0xbb, 0x3e, 0xd9, 0xae, 0x6e, 0xda, 0xa1, 0xba, 0xcd
    },

    // {   /* key 0 */
    //     0xef, 0x48, 0x57, 0x7c, 0x45, 0x81, 0xed, 0x46, 0xd4, 0xe9, 0xd5,
    //     0x2e, 0x66, 0xa1, 0xeb, 0xbb, 0x41, 0x22, 0x57, 0xac, 0xb4, 0x92,
    //     0xd8, 0xdb, 0x58, 0x2d, 0x08, 0x65, 0xf3, 0xf8, 0x73, 0x9c, 0xd9,
    //     0x4f, 0x6a, 0xcc, 0x3f, 0x51, 0x7e, 0x72, 0x41, 0xb0, 0x17, 0x90,
    //     0x97, 0xb5, 0x93, 0x17, 0xed, 0x05, 0xc2, 0x0b, 0x74, 0xf4, 0x8f,
    //     0x2e, 0x7f, 0x83, 0x74, 0xcb, 0x36, 0xa0, 0xb2, 0xde
    // },
    // {   /* key 1 */
    //     0x02, 0x51, 0x71, 0x27, 0x31, 0x09, 0x15, 0x23, 0x49, 0xd1, 0xb4,
    //     0xa1, 0xd5, 0xf7, 0x95, 0xfd, 0x76, 0x83, 0x4e, 0xb8, 0x41, 0xf5,
    //     0x34, 0x99, 0xf8, 0x16, 0xb6, 0x2f, 0xbc, 0xad, 0xa8, 0x5d, 0x7b,
    //     0xbf, 0x68, 0x91, 0xb9, 0xea, 0x58, 0xa0, 0xe9, 0x02, 0x39, 0x5b,
    //     0xe1, 0xf4, 0x11, 0xc9, 0x01, 0x60, 0x5f, 0x8a, 0x95, 0x8c, 0x39,
    //     0x56, 0x23, 0x3f, 0xf4, 0x0e, 0x15, 0x3f, 0x7a, 0xca
    // },
    // {   /* key 2 */
    //     0x9e, 0x1a, 0x79, 0x6e, 0xa9, 0x94, 0xf5, 0xe7, 0x90, 0x53, 0xc5,
    //     0x7e, 0x41, 0x6f, 0x62, 0xf9, 0xd7, 0xa2, 0x2c, 0xe3, 0x9b, 0xdf,
    //     0xef, 0xfd, 0x1c, 0x0a, 0x7e, 0xbb, 0x4d, 0x35, 0x57, 0xda, 0x28,
    //     0x6c, 0x0b, 0xee, 0x50, 0x1f, 0xa0, 0x4e, 0x15, 0x71, 0xee, 0xec,
    //     0xad, 0xde, 0x97, 0x2d, 0xc3, 0x90, 0xa0, 0xf1, 0xb9, 0xaf, 0xd8,
    //     0x6a, 0x8a, 0x63, 0x1c, 0x3d, 0xf6, 0xcb, 0x54, 0x0d
    // },
    // {   /* key 3 */
    //     0x47, 0x96, 0xa4, 0x41, 0x24, 0x1c, 0x6b, 0xc1, 0x15, 0x93, 0xea,
    //     0x89, 0x38, 0x39, 0xb7, 0x7d, 0xd5, 0xde, 0x56, 0x0d, 0x1a, 0x12,
    //     0x75, 0xec, 0x3e, 0xeb, 0xb9, 0x72, 0xaf, 0x9b, 0x8f, 0xe6, 0xc0,
    //     0x28, 0xac, 0x79, 0x4a, 0x4c, 0xde, 0x23, 0x9a, 0xdf, 0x90, 0x2b,
    //     0x3c, 0x51, 0xca, 0xb8, 0x00, 0xd4, 0x2e, 0x5f, 0xfd, 0x90, 0x4e,
    //     0xa8, 0x27, 0xc9, 0xbc, 0xaf, 0x97, 0x0d, 0xc6, 0xaa
    // },
};

#endif /* _FW_KEYS_H_ */
