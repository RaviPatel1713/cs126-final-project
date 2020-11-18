#pragma once

#include "cinder/gl/gl.h"
#include "core/boid.h"

namespace boids_flocking {
using glm::vec2;

class Flock {
public:
  Flock() = default;
  Flock(const std::vector<Boid> &new_flock);
  Flock (size_t num_boids);

  void ApplyForce(const vec2 &force);
  int GetSize();
  Boid GetBoid(size_t index);
  void AddBoid(const Boid &b);
  void Flocking();

private:
  std::vector<Boid> flock;
};
} // namespace boids_flocking

