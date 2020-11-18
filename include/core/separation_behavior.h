#pragma once

#include "cinder/gl/gl.h"
#include "core/boid.h"

namespace boids_flocking{
class SeparationBehavior{
public:
  SeparationBehavior() = default;

  /**
   * Constructs a customizable separation(avoidance) object for flock simulation.
   *
   * @param align_bahavior_enabled set true to visualize separation behavior in
   * flock simulation.
   */
  SeparationBehavior(bool avoidance_behavior_enabled);

  /**
  * Calculates and returns a vector to move away from the boids very close to
   * current boid to avoid clashing effect.
  *
  * @param flock whole list of boids in the container space.
  * @param boid single point boid object with set visual radius.
  */
  vec2 CalculateSeparationAdjustment(const std::vector<Boid> &flock, const Boid &boid);
private:
  double min_separation_distance_;
};
}