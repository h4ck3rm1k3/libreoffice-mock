#pragma once 

typedef short  sal_Int16;
typedef int    sal_Int32;
typedef unsigned int sal_uInt32;

class OUString {};
class OString {
public:
  OString(const char *);
  const char * getStr();
  OString & operator += (const char *);
};

const int RTL_TEXTENCODING_UTF8=1;
OString OUStringToOString(OUString , int );

namespace com {
  namespace sun { 
    namespace star { 
      namespace uno {


        enum some_types {
          typelib_TypeClass_INTERFACE,
        };


        class Type {
        public :
          template <class T> Type (T);
          some_types eTypeClass;
        };

        class Any {
        public:
          Type * pType;
          Type * pReserved;
        };

        class XInterface {
        public :
          template <class T> Any queryInterface(T);
        };

        template<class T> class Sequence {
        public:
          int getLength();
          T operator [] (int x);
        };

        enum extra { UNO_QUERY }; 
 
        class Exception {};

        class RuntimeException : Exception {};

        template <class T> class Reference {
        public:
          Reference(T&);
          Reference(T*);
          Reference(Reference<T>, extra);
          template <class U> Reference(Reference<U>, extra);
          T * operator ->  () const ;
          bool is();
          T * get() const;
        } ;
      };
    };
  };
};

template <class T,class U> int rtl_str_compare(T, U);
