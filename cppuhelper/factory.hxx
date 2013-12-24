

namespace cppu {
  template <class T> class WeakImplHelper1 : public T{};
  template <class T> class UnoType {
  public :
    static const com::sun::star::uno::Type& get() {}

    //    static const com::sun::star::uno::Type& (*get)() {
    //      return doget;
    //}
  };
};
