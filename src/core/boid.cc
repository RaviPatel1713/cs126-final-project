#include "core/boid.h"

namespace boids_flocking {
Boid::Boid() {
  std::default_random_engine defEngine;
  std::uniform_int_distribution<int> int_rand_x(60, 1140);
  std::uniform_int_distribution<int> int_rand_y(60, 740);
  acceleration_ = vec2(0, 0);

  std::uniform_int_distribution<int> intDistro(0,100);
  velocity_ = vec2(intDistro(defEngine)%3 - 2,
                   intDistro(defEngine)%3 - 2);
  position_ = vec2(int_rand_x(defEngine), int_rand_y(defEngine));
  max_speed_ = 3.5;
  max_force_ = 0.5;
}

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
void Boid::Draw() const {}

void Boid::Update() { position_ += velocity_; }

vec2 Boid::GetPosition() const { return position_; }

vec2 Boid::GetVelocity() const { return velocity_; }

vec2 Boid::GetAcceleration() const { return acceleration_; }
} // namespace boids_flocking