#pragma once
#include "Potential.hpp"

class PotentialHarmonicOscillator : public Potential {
  complex* pot;

 public:

  void Initialize () {
    pot = new complex [g->nx];
    for (int ix = 0; ix < g->nx; ix ++) {
      double x = g->x[ix];
      pot[ix] = complex (0.5 * x * x, 0.);
    }
  }
  void Finalize () {
    delete[] pot;
  }

  inline complex V (long ix, long it) {
    //double x = g->x[ix];
    //return complex (0.5 * x * x, 0.);
    return pot[ix];
  }
};
