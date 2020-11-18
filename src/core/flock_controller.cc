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
    resultant += cohesion_.CalculateCohesionAdjustment(flock, current_boid);
    resultant += avoidance_.CalculateSeparationAdjustment(flock, current_boid);
    resultant += alignment_.CalculateAlignmentAdjustment(flock, current_boid);
    current_boid.ApplyForce(resultant);
    current_boid.Update();
  }
}

int FlockController::GetSize() { return flock.size(); }

Boid FlockController::GetBoid(size_t index) {
  if(index >= flock .size()){
    throw std::invalid_argument("Index is out-of-bound for current flock.");
  }
  return flock.at(index);
}

void FlockController::AddBoid(const vec2 &location) { AddBoid(Boid(location)); }

void FlockController::AddBoid(const Boid &) { flock.emplace_back(); }

} // namespace boids_flocking