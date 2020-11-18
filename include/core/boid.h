#pragma once

#include "cinder/gl/gl.h"
#include <random>
namespace boids_flocking {
using glm::vec2;

class Boid {
public:
  /**
   * Constructs a boid object with a random rendering location and velocity
   * within the simulator container.
   */
  Boid();

  /**
   * Contructs  boid object with a given rendering location and a random
   * velocity within the simulator container.
   */
  Boid(const vec2 &pos);

  /**
   * Draws a boid within the container.
   */
  void Draw() const;

  /**
   * Updates the boid location with stored velocity for the boid.
   */
  void Update();

  /**
   * Applies new velocity changes for the boid within the container.
   */
  void ApplyForce(const vec2 &force);

  // accessor methods
  vec2 GetPosition() const;
  vec2 GetVelocity() const;
  vec2 GetAcceleration() const;
private:
  vec2 position_;
  vec2 velocity_;
  vec2 acceleration_;
  float max_speed_;
  float max_force_;
};
} // namespace boids_flocking

