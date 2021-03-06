#include "BaseComputationScheme.hpp"

namespace CNTDSE1D {

class TDSEComputationScheme : public BaseComputationScheme {
 public:
  InitWave* initWave;

  int Initialize ();
  void Finalize ();
  int Run ();

};

}
