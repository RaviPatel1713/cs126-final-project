#pragma once

#include "cinder/gl/gl.h"

namespace boids_flocking {
using glm::vec2;

class Boid {
public:
  Boid() = default;
  Boid(const vec2 &pos);
  Boid(const vec2 &pos, bool pred_check);
  void ApplyForce(const vec2 &force);

private:
  vec2 position_;
  vec2 velocity_;
  vec2 acceleration_;
  float max_speed_;
  float max_force_;
  bool is_predator_;
};
} // namespace boids_flocking

