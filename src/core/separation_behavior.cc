#include "core/separation_behavior.h"

namespace boids_flocking{

SeparationBehavior::SeparationBehavior(bool avoidance_behavior_enabled) {
  if (avoidance_behavior_enabled){
    min_separation_distance_ = 100;
  }
}

vec2 SeparationBehavior::CalculateSeparationAdjustment(const std::vector<Boid> &flock, const Boid &boid) {
  //TODO: Add code to calculate the vector to move away from neighboring boids
  // too close
  return glm::vec2();
}

}
