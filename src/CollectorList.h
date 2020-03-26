#include <Rinternals.h>

class CollectorList {
  SEXP data_;
  R_xlen_t n_;

public:
  CollectorList(R_xlen_t size = 1) : n_(0) {
    data_ = Rf_allocVector(VECSXP, size);
    R_PreserveObject(data_);
  }

  void push_back(SEXP x) {
    if (Rf_xlength(data_) == n_) {
      data_ = Rf_lengthgets(data_, n_ * 2);
    }
    SET_VECTOR_ELT(data_, n_++, x);
  }

  SEXP vector() {
    if (Rf_xlength(data_) != n_) {
      data_ = Rf_xlengthgets(data_, n_);
    }
    return data_;
  }

  ~CollectorList() { R_ReleaseObject(data_); }
};
