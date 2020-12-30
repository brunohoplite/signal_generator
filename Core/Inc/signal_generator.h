/*
 * signal_generator.h
 *
 *  Created on: Dec 28, 2020
 *      Author: bruno
 */

#pragma once

#include "main.h"

#define numSamples  128

typedef enum {
	A_4 = 440,
	B_4 = 494,
	C_5 = 523,
	D_5 = 587,
	E_5 = 659,
	F_5 = 698,
	G_5 = 783,
	A_5 = 880,

	ALL_NOTES
}MusicNote;

const uint32_t sineWaveLut[numSamples];

void signalGeneratorPlayNote(MusicNote note);
void signalGeneratorInit(TIM_HandleTypeDef* htim);
