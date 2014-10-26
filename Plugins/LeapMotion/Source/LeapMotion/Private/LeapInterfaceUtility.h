#pragma once

#include "Leap.h"
#include "Core.h"

DECLARE_LOG_CATEGORY_EXTERN(LeapPluginLog, Log, All);

//Conversion
FVector convertLeapToUE(Leap::Vector leapVector);
FVector convertAndScaleLeapToUE(Leap::Vector leapVector);
Leap::Vector convertUEToLeap(FVector ueVector);
Leap::Vector convertAndScaleUEToLeap(FVector ueVector);

//HMD automation
void LeapSetShouldAdjustForFacing(bool shouldRotate);
void LeapSetShouldAdjustForHMD(bool shouldRotate, bool shouldOffset);
