/**
 * \file
 * \brief TNG TLS device certificate definition
 *
 * \copyright (c) 2015-2020 Microchip Technology Inc. and its subsidiaries.
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip software
 * and any derivatives exclusively with Microchip products. It is your
 * responsibility to comply with third party license terms applicable to your
 * use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
 * PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT,
 * SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE
 * OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE
 * FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL
 * LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED
 * THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR
 * THIS SOFTWARE.
 */

#include "atcacert/atcacert_def.h"
#include "tngtls_cert_def_1_signer.h"

const uint8_t g_tflxtls_cert_template_4_device[500] = {
    0x30, 0x82, 0x01, 0xF0, 0x30, 0x82, 0x01, 0x97, 0xA0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x55,
    0xCE, 0x2E, 0x8F, 0xF6, 0x1C, 0x62, 0x50, 0xB7, 0xE1, 0x68, 0x03, 0x54, 0x14, 0x1C, 0x94, 0x30,
    0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x04, 0x03, 0x02, 0x30, 0x4F, 0x31, 0x21, 0x30,
    0x1F, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C, 0x18, 0x4D, 0x69, 0x63, 0x72, 0x6F, 0x63, 0x68, 0x69,
    0x70, 0x20, 0x54, 0x65, 0x63, 0x68, 0x6E, 0x6F, 0x6C, 0x6F, 0x67, 0x79, 0x20, 0x49, 0x6E, 0x63,
    0x31, 0x2A, 0x30, 0x28, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C, 0x21, 0x43, 0x72, 0x79, 0x70, 0x74,
    0x6F, 0x20, 0x41, 0x75, 0x74, 0x68, 0x65, 0x6E, 0x74, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E,
    0x20, 0x53, 0x69, 0x67, 0x6E, 0x65, 0x72, 0x20, 0x46, 0x46, 0x46, 0x46, 0x30, 0x20, 0x17, 0x0D,
    0x31, 0x38, 0x31, 0x31, 0x30, 0x38, 0x30, 0x35, 0x30, 0x30, 0x30, 0x30, 0x5A, 0x18, 0x0F, 0x32,
    0x30, 0x34, 0x36, 0x31, 0x31, 0x30, 0x38, 0x30, 0x35, 0x30, 0x30, 0x30, 0x30, 0x5A, 0x30, 0x42,
    0x31, 0x21, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C, 0x18, 0x4D, 0x69, 0x63, 0x72, 0x6F,
    0x63, 0x68, 0x69, 0x70, 0x20, 0x54, 0x65, 0x63, 0x68, 0x6E, 0x6F, 0x6C, 0x6F, 0x67, 0x79, 0x20,
    0x49, 0x6E, 0x63, 0x31, 0x1D, 0x30, 0x1B, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C, 0x14, 0x73, 0x6E,
    0x30, 0x31, 0x32, 0x33, 0x30, 0x31, 0x30, 0x32, 0x30, 0x33, 0x30, 0x34, 0x30, 0x35, 0x30, 0x36,
    0x30, 0x31, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x02, 0x01, 0x06,
    0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x71, 0xF1, 0xA7,
    0x0D, 0xA3, 0x79, 0xA3, 0xFD, 0xED, 0x6B, 0x50, 0x10, 0xBD, 0xAD, 0x6E, 0x1F, 0xB9, 0xE8, 0xEB,
    0xA7, 0xDF, 0x2C, 0x4B, 0x5C, 0x67, 0xD3, 0x5E, 0xBA, 0x84, 0xDA, 0x09, 0xE7, 0x7A, 0xE8, 0xDB,
    0x2C, 0xCB, 0x96, 0x28, 0xEE, 0xEB, 0x85, 0xCD, 0xAA, 0xB3, 0x5C, 0x92, 0xE5, 0x3E, 0x1C, 0x44,
    0xD5, 0x5A, 0x2B, 0xA7, 0xA0, 0x24, 0xAA, 0x92, 0x60, 0x3B, 0x68, 0x94, 0x8A, 0xA3, 0x60, 0x30,
    0x5E, 0x30, 0x0C, 0x06, 0x03, 0x55, 0x1D, 0x13, 0x01, 0x01, 0xFF, 0x04, 0x02, 0x30, 0x00, 0x30,
    0x0E, 0x06, 0x03, 0x55, 0x1D, 0x0F, 0x01, 0x01, 0xFF, 0x04, 0x04, 0x03, 0x02, 0x03, 0x88, 0x30,
    0x1D, 0x06, 0x03, 0x55, 0x1D, 0x0E, 0x04, 0x16, 0x04, 0x14, 0x1A, 0x90, 0xB2, 0x22, 0x37, 0xA4,
    0x51, 0xB7, 0x57, 0xDD, 0x36, 0xD1, 0x3A, 0x85, 0x2B, 0xE1, 0x3D, 0x2E, 0xF2, 0xCA, 0x30, 0x1F,
    0x06, 0x03, 0x55, 0x1D, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0xBC, 0xD4, 0xFD, 0xE8, 0x80,
    0x8A, 0x2D, 0xC9, 0x0B, 0x6D, 0x01, 0xA8, 0xC5, 0xB9, 0xB2, 0x47, 0x33, 0x7E, 0xBD, 0xDA, 0x30,
    0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x04, 0x03, 0x02, 0x03, 0x47, 0x00, 0x30, 0x44,
    0x02, 0x20, 0x56, 0x73, 0x96, 0xE4, 0x9C, 0x0A, 0xA7, 0x4E, 0x61, 0x60, 0x12, 0xE3, 0x8A, 0x60,
    0xC3, 0xA8, 0x11, 0x09, 0x7D, 0x9C, 0x5D, 0xA4, 0xCD, 0x37, 0x89, 0xC3, 0x62, 0x96, 0x88, 0x7E,
    0x2A, 0x0C, 0x02, 0x20, 0x1E, 0x69, 0xB2, 0xAF, 0x0A, 0xD6, 0xC6, 0x7E, 0xE1, 0x2D, 0x5D, 0xBE,
    0x5A, 0x44, 0x5A, 0xD9, 0x1D, 0xF1, 0xA5, 0x98, 0x35, 0x8E, 0xD0, 0x69, 0xD9, 0x8B, 0xD7, 0xDB,
    0xB2, 0x99, 0xCC, 0x34
};

const atcacert_cert_element_t g_tflxtls_cert_elements_4_device[] = {
    {
        .id = "SN03",
        .device_loc ={
            .zone      = DEVZONE_CONFIG,
            .slot      = 0,
            .is_genkey = 0,
            .offset    = 0,
            .count     = 4
        },
        .cert_loc ={
            .offset = 208,
            .count  = 8
        },
        .transforms ={
            TF_BIN2HEX_UC,
            TF_NONE
        }
    },
    {
        .id = "SN48",
        .device_loc ={
            .zone      = DEVZONE_CONFIG,
            .slot      = 0,
            .is_genkey = 0,
            .offset    = 8,
            .count     = 5
        },
        .cert_loc ={
            .offset = 216,
            .count  = 10
        },
        .transforms ={
            TF_BIN2HEX_UC,
            TF_NONE
        }
    }
};

const atcacert_def_t g_tflxtls_cert_def_4_device = {
    .type                = CERTTYPE_X509,
    .template_id         = 3,
    .chain_id            = 0,
    .private_key_slot    = 0,
    .sn_source           = SNSRC_PUB_KEY_HASH,
    .cert_sn_dev_loc     = {
        .zone            = DEVZONE_NONE,
        .slot            = 0,
        .is_genkey       = 0,
        .offset          = 0,
        .count           = 0
    },
    .issue_date_format   = DATEFMT_RFC5280_UTC,
    .expire_date_format  = DATEFMT_RFC5280_GEN,
    .tbs_cert_loc        = {
        .offset          = 4,
        .count           = 411
    },
    .expire_years        = 28,
    .public_key_dev_loc  = {
        .zone            = DEVZONE_DATA,
        .slot            = 0,
        .is_genkey       = 1,
        .offset          = 0,
        .count           = 64
    },
    .comp_cert_dev_loc   = {
        .zone            = DEVZONE_DATA,
        .slot            = 10,
        .is_genkey       = 0,
        .offset          = 0,
        .count           = 72
    },
    .std_cert_elements   = {
        {   // STDCERT_PUBLIC_KEY
            .offset      = 253,
            .count       = 64
        },
        {   // STDCERT_SIGNATURE
            .offset      = 427,
            .count       = 64
        },
        {   // STDCERT_ISSUE_DATE
            .offset      = 128,
            .count       = 13
        },
        {   // STDCERT_EXPIRE_DATE
            .offset      = 143,
            .count       = 15
        },
        {   // STDCERT_SIGNER_ID
            .offset      = 120,
            .count       = 4
        },
        {   // STDCERT_CERT_SN
            .offset      = 15,
            .count       = 16
        },
        {   // STDCERT_AUTH_KEY_ID
            .offset      = 395,
            .count       = 20
        },
        {   // STDCERT_SUBJ_KEY_ID
            .offset      = 362,
            .count       = 20
        }
    },
    .cert_elements       = g_tflxtls_cert_elements_4_device,
    .cert_elements_count = sizeof(g_tflxtls_cert_elements_4_device) / sizeof(g_tflxtls_cert_elements_4_device[0]),
    .cert_template       = g_tflxtls_cert_template_4_device,
    .cert_template_size  = sizeof(g_tflxtls_cert_template_4_device),
    .ca_cert_def         = &g_tngtls_cert_def_1_signer
};