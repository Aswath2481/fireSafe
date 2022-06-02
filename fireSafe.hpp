#ifndef FIRESAFE_HPP
#define FIRESAFE_HPP
#include <cstring>

namespace fireSafe{
  /***
   *  Wrapper function - 
   *  Copies one blob of memory to another blob of memory without tampering adjacent memory.
   * 
   ** */
  template <typename T>
  void * memcpy(T &dest,T &src){
      static_assert(sizeof dest == sizeof src,"Check size of destination and source!!"); //just incase 
      return std::memcpy(&dest,&src,sizeof(src));
  }

  template <typename T>
  bool operator == (T &a, T &b){
    int temp = memcmp(&a, &b,sizeof(a));
    return (temp!=0)?false:true;
  }

  template <typename T>
  class Tools{
    public:

        T& operator = (const T rhs){
            static_cast<void*>(fireSafe::memcpy(this,rhs));
            return *this;
        }

        bool operator == (const T &rhs){
            return *this == rhs;
        }
  };
}
#endif