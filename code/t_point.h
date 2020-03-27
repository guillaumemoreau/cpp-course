// classe template pour les points

#ifndef __point_h
#define __point_h

template<typename T> class point {
protected:
  T x;
  T y;

public:
  point(T x,T y) {
    this->x = x;
    this->y = y;
  }

  point() {
    // nothing
  }

  T getX() const {
    return this->x;
  }

  T getY() const {
    return this->y;
  }

  T norm2() const ;
};

template<typename T> T point<T>::norm2() const {
  return x*x+y*y;
}

#endif
