#pragma once
#include "cinder/gl/gl.h"

#include "core/boid.h"

namespace boids_flocking{
using glm::vec2;

class AlignmentBehavior{
public:
  AlignmentBehavior() = default;

  /**
   * Constructs a customizable alignment object for flock simulation.
   *
   * @param align_bahavior_enabled is set true to visualize alignment behavior in
   * flock simulation.
   */
  AlignmentBehavior(bool align_bahavior_enabled);

  /**
   * Calculates and returns the alignment offset vector for a boid influenced
   * by its neighborhood flock.
   *
   * @param flock whole list of boids in the container space.
   * @param boid single point boid object with set visual radius.
   */
  vec2 CalculateAlignmentAdjustment(const std::vector<Boid> &flock, const Boid &boid);
private:
  bool align_bahavior_enabled_;
};
}