#pragma once
#include "cinder/gl/gl.h"

#include "core/boid.h"
#include "core/boid_flocking_config.h"
namespace boids_flocking{
class CohesionBehavior{
public:
  CohesionBehavior() = default;
  CohesionBehavior(bool cohesion_behavior_enabled);

  vec2 CalculateCohesionAdjustment(const std::vector<Boid> &flock, const Boid &boid);
private:
  bool cohesion_behavior_enabled_;
};
}
