#include "core/flock_controller.h"
#include <utility>
#include "cinder/gl/gl.h"

namespace boids_flocking {

FlockController::FlockController(const std::vector<Boid> &new_flock)
    : flock(new_flock) {}

FlockController::FlockController(size_t num_boids) {
  for (size_t i = 0; i < num_boids; ++i){
    this->AddBoid(Boid());
  }
}

void FlockController::Draw() const {
  for(const Boid &boid : flock){ boid.Draw(); }
}

void FlockController::Update() {
  for(Boid &current_boid : flock){
    vec2 resultant = vec2(0, 0);
    resultant += cohesion_.CalculateCohesionAdjustment(current_boid);
    resultant += avoidance_.CalculateSeparationAdjustment(current_boid);
    resultant += alignment_.CalculateAlignmentAdjustment(current_boid);
    current_boid.ApplyForce(resultant);
    current_boid.Update();
  }
}

int FlockController::GetSize() { return 0; }

Boid FlockController::GetBoid(size_t index) { return Boid(); }

void FlockController::AddBoid(const vec2 &location) {}

void FlockController::AddBoid(const Boid &) {
  flock.push_back(Boid());
}

} // namespace boids_flocking