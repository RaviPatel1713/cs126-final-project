#include "core/cohesion_behavior.h"

namespace boids_flocking{

CohesionBehavior::CohesionBehavior(bool cohesion_behavior_enabled)
    : cohesion_behavior_enabled_(cohesion_behavior_enabled){}

vec2 CohesionBehavior::CalculateCohesionAdjustment(const Boid &boid) {
  //TODO: Add code to calculate the vector to move towards the perceived center
  // of the boid neighborhood
  return glm::vec2();
}
}
