#pragma once

namespace boids_flocking{
class CohesionBehavior{
public:
  CohesionBehavior() = default;
  CohesionBehavior(bool cohesion_behavior_enabled);
private:
  bool cohesion_behavior_enabled_;
};
}
