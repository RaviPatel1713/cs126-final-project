#include "core/align_behavior.h"

namespace boids_flocking{

AlignmentBehavior::AlignmentBehavior(bool align_bahavior_enabled)
    : align_bahavior_enabled_(align_bahavior_enabled){}

vec2 AlignmentBehavior::CalculateAlignmentAdjustment(const std::vector<Boid> &flock, const Boid &boid) {
  //TODO: Add code to calculate the vector to align a boid to its neighborhood

  return glm::vec2();
}
}
