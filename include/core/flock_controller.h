#pragma once

#include "cinder/gl/gl.h"

#include "core/boid.h"
#include "core/align_behavior.h"
#include "core/separation_behavior.h"
#include "core/cohesion_behavior.h"

namespace boids_flocking {
using glm::vec2;

class FlockController {
public:
  FlockController() = default;

  /**
   * Constructs a flock controller from a given list of boids to control and
   * update the flock motion influenced from three governing behaviors:
   * cohesion, alignment, and separation.
   */
  FlockController(const std::vector<Boid> &new_flock);

  /**
   * Constructs a flock controller, from a given number of boids to be rendered
   * in the simulation, to control and update the flock motion influenced from
   * three governing behaviors: cohesion, alignment, and separation.
   *
   * @param num_boids - number of new boids to render in the simulation.
   */
  FlockController (size_t num_boids);

  /**
   * Draws the flock of boids.
   */
  void Draw() const;

  /**
   * Updates the flock by each boid by boid governed by three flock motion
   * behaviors: cohesion, alignment, and separation.
   */
  void Update();

  /**
   * Adds a boid to the simulation with given location and a random velocity.
   */
  void AddBoid(const vec2 &location);

  /**
   * Adds a boid to the simulation given a constructed boid in parameter.
   */
  void AddBoid(const Boid &new_boid);

  // accessor methods
  int GetSize();
  Boid GetBoid(size_t index);

private:
  std::vector<Boid> flock;
  AlignmentBehavior alignment_;
  SeparationBehavior avoidance_;
  CohesionBehavior cohesion_;


};
} // namespace boids_flocking

