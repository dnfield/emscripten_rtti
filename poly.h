#ifndef _POLY_H_
#define _POLY_H_

#include <string>

class Poly {
 public:
  virtual ~Poly() {}
  virtual std::string message() = 0;
};

class PolyHi : public Poly {
 public:
  std::string message() override;
};

#endif  // _POLY_H_
