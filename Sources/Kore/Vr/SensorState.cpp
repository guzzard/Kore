#include "pch.h"

#include "SensorState.h"

SensorState::SensorState() : isVisible(false), hmdPresenting(false), hmdMounted(false), 
							 displayLost(false), shouldQuit(false), shouldRecenter(false) {

}

SensorState::~SensorState() {

}
