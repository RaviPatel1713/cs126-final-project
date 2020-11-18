#pragma once
#include "cinder/gl/gl.h"

#include "core/boid.h"

namespace boids_flocking{
using glm::vec2;

class AlignmentBehavior{
public:
  AlignmentBehavior() = default;
  AlignmentBehavior(bool align_bahavior_enabled);

  vec2 CalculateAlignmentAdjustment(const std::vector<Boid> &flock, const Boid &boid);
private:
  bool align_bahavior_enabled_;
};
}