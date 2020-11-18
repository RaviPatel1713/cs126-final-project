#pragma once

#include "cinder/gl/gl.h"
#include "core/boid.h"

namespace boids_flocking{
class SeparationBehavior{
public:
  SeparationBehavior() = default;
  SeparationBehavior(bool avoidance_behavior_enabled);

  vec2 CalculateSeparationAdjustment(const std::vector<Boid> &flock, const Boid &boid);
private:
  double min_separation_distance_;
};
}