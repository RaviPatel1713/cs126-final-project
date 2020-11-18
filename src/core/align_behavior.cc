#include "core/align_behavior.h"
#include "core/boid_flocking_config.h"
namespace boids_flocking{

AlignmentBehavior::AlignmentBehavior(bool align_bahavior_enabled)
    : align_bahavior_enabled_(align_bahavior_enabled){}

vec2 AlignmentBehavior::CalculateAlignmentAdjustment(const std::vector<Boid> &flock, const Boid &boid) {
  //TODO: Add code to calculate the vector to align a boid to its neighborhood
  vec2 alignment_offset_vector = vec2(0, 0);
  for(const Boid &current_boid : flock){
    if (&current_boid  != &boid){
      if(glm::distance(current_boid.GetPosition(), boid.GetPosition()) <
         kBoidVisualRange){
        alignment_offset_vector += current_boid.GetPosition();
      }
    }
  }
  alignment_offset_vector =
      vec2(alignment_offset_vector.x/(float)(flock.size() - 1),
           alignment_offset_vector.y/(float)(flock.size() - 1));
  alignment_offset_vector =
      vec2((alignment_offset_vector.x - boid.GetPosition().x)/4.0f,
           (alignment_offset_vector.y - boid.GetPosition().y)/4.0f);
  return alignment_offset_vector;
}
}
