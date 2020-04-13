#include <emscripten/bind.h>
#include <memory>

#include "poly.h"

using namespace emscripten;

std::shared_ptr<Poly> MakePoly() {
  return std::make_shared<PolyHi>();
}

EMSCRIPTEN_BINDINGS(interface_tests) {
  class_<Poly>("Poly")
    .smart_ptr_constructor("Poly", &MakePoly)
    .function("message", &Poly::message)
    ;
};