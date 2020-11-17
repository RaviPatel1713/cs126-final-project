#pragma once

//#include "cinder/gl/gl.h"
#include "core/boid.h"

namespace boids_flocking {
using glm::vec2;

class Flock {
public:
  void ApplyForce(const vec2 &force);
  int GetSize();
  Boid GetBoid(size_t index);
  void AddBoid(const Boid &b);
  void Flocking();

private:
//  std::vector<Boid> flock;
};
} // namespace boids_flocking

