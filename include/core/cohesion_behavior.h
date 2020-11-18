#pragma once
#include "cinder/gl/gl.h"

#include "core/boid.h"

namespace boids_flocking{
class CohesionBehavior{
public:
  CohesionBehavior() = default;
  CohesionBehavior(bool cohesion_behavior_enabled);

  vec2 CalculateCohesionAdjustment(const Boid &boid);
private:
  bool cohesion_behavior_enabled_;
};
}
