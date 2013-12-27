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

inline IllegalAccessibleComponentStateException::IllegalAccessibleComponentStateException() SAL_THROW(())
    : ::css::uno::Exception()
{
    ::cppu::UnoType< ::css::accessibility::IllegalAccessibleComponentStateException >::get();
}

inline IllegalAccessibleComponentStateException::IllegalAccessibleComponentStateException(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_) SAL_THROW(())
    : ::css::uno::Exception(Message_, Context_)
{
    ::cppu::UnoType< ::css::accessibility::IllegalAccessibleComponentStateException >::get();
}

IllegalAccessibleComponentStateException::IllegalAccessibleComponentStateException(IllegalAccessibleComponentStateException const & the_other): ::css::uno::Exception(the_other) {}

IllegalAccessibleComponentStateException::~IllegalAccessibleComponentStateException() {}

IllegalAccessibleComponentStateException & IllegalAccessibleComponentStateException::operator =(IllegalAccessibleComponentStateException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::uno::Exception::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theIllegalAccessibleComponentStateExceptionType : public rtl::StaticWithInit< ::css::uno::Type *, theIllegalAccessibleComponentStateExceptionType >
{
    ::css::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.IllegalAccessibleComponentStateException" );

        // Start inline typedescription generation
        typelib_TypeDescription * pTD = 0;
        const ::css::uno::Type& rSuperType = ::cppu::UnoType< ::css::uno::Exception >::get();

        typelib_typedescription_new(
            &pTD,
            (typelib_TypeClass)::css::uno::TypeClass_EXCEPTION, sTypeName.pData,
            rSuperType.getTypeLibType(),
            0,
            0 );

        typelib_typedescription_register( (typelib_TypeDescription**)&pTD );

        typelib_typedescription_release( pTD );
        // End inline typedescription generation

        return new ::css::uno::Type( ::css::uno::TypeClass_EXCEPTION, sTypeName ); // leaked
    }
};

} } } } }

namespace com { namespace sun { namespace star { namespace accessibility {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::accessibility::IllegalAccessibleComponentStateException const *) {
    return *detail::theIllegalAccessibleComponentStateExceptionType::get();
}

} } } }

inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::accessibility::IllegalAccessibleComponentStateException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::css::accessibility::IllegalAccessibleComponentStateException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ILLEGALACCESSIBLECOMPONENTSTATEEXCEPTION_HPP
