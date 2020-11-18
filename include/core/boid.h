#pragma once

#include "cinder/gl/gl.h"
#include <random>
namespace boids_flocking {
using glm::vec2;

class Boid {
public:
  Boid() = default;
  Boid(const vec2 &pos);
  void ApplyForce(const vec2 &force);

private:
  vec2 position_;
  vec2 velocity_;
  vec2 acceleration_;
  float max_speed_;
  float max_force_;
};
} // namespace boids_flocking

