/**
 * @file hardware.h
 * @author Locha Mesh Developers (contact@locha.io)
 * @brief 
 * @version 0.1
 * @date 2019-09-11
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef HARDWARE_H_
#define HARDWARE_H_

#if defined(ARDUINO_HELTEC_WIFI_LORA_32_V2)
    #include "heltec_v2.h"
#elif defined(ARDUINO_ESP32_DEV)
    #include "esp32_devkit_v1.h"
#endif


#endif // HARDWARE_H_