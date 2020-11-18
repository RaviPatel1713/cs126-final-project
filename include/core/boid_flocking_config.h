#pragma once
#include "cinder/gl/gl.h"

namespace boids_flocking{
const double kWindowWidth = 1200;
const double kWindowHeight = 800;
const ci::Color kBackGroundColor =  ci::Color8u(0, 100, 100);

const double kMinSeparationDistance = 100;
const double kBoidVisualRange = 100;
const double kBoidVisionAngle = 240; //360 -> full neighborhood perception
}
