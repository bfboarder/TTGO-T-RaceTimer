/*
 * This file is part of TTGO-T-RaceTimer (https://github.com/bfboarder/321-TTGO-ChorusRF)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 */

#pragma once

#include <esp_attr.h>
#include <stdint.h>

#include "HardwareConfig.h"
#include "Filter.h"

void ConfigureADC();
void IRAM_ATTR CheckRSSIthresholdExceeded(uint8_t node);
void ReadVBAT_INA219();
void IRAM_ATTR nbADCread(void *pvParameters);

uint16_t getRSSI(uint8_t index);
void setRSSIThreshold(uint8_t node, uint16_t threshold);
uint16_t getRSSIThreshold(uint8_t node);
uint16_t getADCLoopCount();
void setADCLoopCount(uint16_t count);

void setVbatCal(float calibration);
float getMaFloat();

float getVbatFloat(bool force_read = false);
void setVbatFloat(float val);

float getVBATcalibration();
void setVBATcalibration(float val);
