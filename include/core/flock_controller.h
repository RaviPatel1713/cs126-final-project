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
  FlockController(const std::vector<Boid> &new_flock);
  FlockController (size_t num_boids);

  void Draw() const;
  void Update();
  void AddBoid(const vec2 &location);
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

