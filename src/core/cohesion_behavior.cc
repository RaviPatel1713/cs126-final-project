#include "core/cohesion_behavior.h"

namespace boids_flocking{

CohesionBehavior::CohesionBehavior(bool cohesion_behavior_enabled)
    : cohesion_behavior_enabled_(cohesion_behavior_enabled){}

vec2 CohesionBehavior::
    CalculateCohesionAdjustment(const std::vector<Boid> &flock,
                                const Boid &boid) {
  //TODO: Add code to calculate the vector to move towards the perceived center
  // of the boid neighborhood
  vec2 boid_neighborhood_center = vec2(0, 0);
  for(const Boid &current_boid : flock){
    if (&current_boid  != &boid){
      if(glm::distance(current_boid.GetPosition(), boid.GetPosition()) < kBoidVisualRange){
        boid_neighborhood_center += current_boid.GetPosition();
      }
    }
  }
  boid_neighborhood_center =
      vec2(boid_neighborhood_center.x/(float)(flock.size() - 1),
           boid_neighborhood_center.y/(float)(flock.size() - 1));
  boid_neighborhood_center =
      vec2((boid_neighborhood_center.x - boid.GetPosition().x)/100.0f,
           (boid_neighborhood_center.y - boid.GetPosition().y)/100.0f);
  return boid_neighborhood_center;
}
}
