#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ILLEGALACCESSIBLECOMPONENTSTATEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ILLEGALACCESSIBLECOMPONENTSTATEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/IllegalAccessibleComponentStateException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"

namespace com { namespace sun { namespace star { namespace accessibility {

inline IllegalAccessibleComponentStateException::IllegalAccessibleComponentStateException()
    : ::com::sun::star::uno::Exception()
{
    ::cppu::UnoType< ::com::sun::star::accessibility::IllegalAccessibleComponentStateException >::get();
}

inline IllegalAccessibleComponentStateException::IllegalAccessibleComponentStateException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) 
    : ::com::sun::star::uno::Exception(Message_, Context_)
{
    ::cppu::UnoType< ::com::sun::star::accessibility::IllegalAccessibleComponentStateException >::get();
}

IllegalAccessibleComponentStateException::IllegalAccessibleComponentStateException(IllegalAccessibleComponentStateException const & the_other): ::com::sun::star::uno::Exception(the_other) {}

IllegalAccessibleComponentStateException::~IllegalAccessibleComponentStateException() {}

IllegalAccessibleComponentStateException & IllegalAccessibleComponentStateException::operator =(IllegalAccessibleComponentStateException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theIllegalAccessibleComponentStateExceptionType : public 
rtl::StaticWithInit< ::com::sun::star::uno::Type *, theIllegalAccessibleComponentStateExceptionType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.IllegalAccessibleComponentStateException" );

        // Start inline typedescription generation
        /*
typelib_TypeDescription * pTD = 0;
        const ::com::sun::star::uno::Type& rSuperType = ::cppu::UnoType< ::com::sun::star::uno::Exception >::get();

        typelib_typedescription_new(
            &pTD,
            (typelib_TypeClass)::com::sun::star::uno::TypeClass_EXCEPTION, 
            sTypeName,
            rSuperType.getTypeLibType(),
            0,
            0 );

        typelib_typedescription_register( (typelib_TypeDescription**)&pTD );

        typelib_typedescription_release( pTD );
        // End inline typedescription generation
        */
        return new 
          ::com::sun::star::uno::Type( 
                                      ::com::sun::star::uno::TypeClass_EXCEPTION,
                                      sTypeName ); // leaked
    }
};

} } } } }




#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ILLEGALACCESSIBLECOMPONENTSTATEEXCEPTION_HPP
