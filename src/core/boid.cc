#include "core/boid.h"

namespace boids_flocking {
Boid::Boid(const vec2 &pos) : position_(pos) {
  // a uniform distribution random number generator b/w [0, 100]
  std::default_random_engine defEngine;
  std::uniform_int_distribution<int> intDistro(0,100);
  acceleration_ = vec2(0, 0);
  velocity_ = vec2(intDistro(defEngine)%3 - 2,
                   intDistro(defEngine)%3 - 2);
  max_speed_ = 3.5;
  max_force_ = 0.5;
}

void Boid::ApplyForce(const vec2 &force) {
  acceleration_ += force;
}
} // namespace boids_flocking