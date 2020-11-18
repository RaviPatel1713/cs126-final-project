#include "core/flock.h"

#include <utility>

namespace boids_flocking{

Flock::Flock(const std::vector<Boid> &new_flock)
    : flock(std::move(new_flock)){}

Flock::Flock(size_t num_boids) {
  
}

void Flock::ApplyForce(const vec2 &force) {}

int Flock::GetSize() { return 0; }

Boid Flock::GetBoid(size_t index) { return Boid(); }

void Flock::AddBoid(const Boid &b) {}

void Flock::Flocking() {}
}