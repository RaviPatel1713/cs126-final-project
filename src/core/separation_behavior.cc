#include "core/separation_behavior.h"
#include "core/boid_flocking_config.h"
namespace boids_flocking{

SeparationBehavior::SeparationBehavior(bool avoidance_behavior_enabled) {
  if (avoidance_behavior_enabled){
    min_separation_distance_ = 100;
  }
}

vec2 SeparationBehavior::
    CalculateSeparationAdjustment(const std::vector<Boid> &flock,
                                  const Boid &boid) {
  //TODO: Add code to calculate the vector to move away from neighboring boids
  // too close
  vec2 separation_offset_vector = vec2(0, 0);
  for(const Boid &current_boid : flock){
    if (&current_boid  != &boid){
      if(glm::distance(current_boid.GetPosition(), boid.GetPosition()) <
          kMinSeparationDistance){
        separation_offset_vector -= current_boid.GetPosition() -
                                    boid.GetPosition();
      }
    }
  }
  return separation_offset_vector;
}

}
