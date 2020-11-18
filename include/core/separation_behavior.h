#pragma once

namespace boids_flocking{
class SeparationBehavior{
public:
  SeparationBehavior() = default;
  SeparationBehavior(bool avoidance_behavior_enabled);
private:
  double min_separation_distance_;
};
}