#pragma once
#include "cinder/gl/gl.h"

#include "core/boid.h"
#include "core/boid_flocking_config.h"

namespace boids_flocking{
class CohesionBehavior{
public:
  CohesionBehavior() = default;

  /**
   * Constructs a customizable cohesion behavior object for flock simulation.
   *
   * @param cohesion_behavior_enabled set true to visualize cohesion behavior
   * in flock simulation.
   */
  CohesionBehavior(bool cohesion_behavior_enabled);

  /**
  * Calculates and returns the cohesion vector to move at the center of mass of
   * the a boid's neighborhood flock.
  *
  * @param flock whole list of boids in the container space.
  * @param boid single point boid object with set visual radius.
  */
  vec2 CalculateCohesionAdjustment(const std::vector<Boid> &flock, const Boid &boid);
private:
  bool cohesion_behavior_enabled_;
};
}
