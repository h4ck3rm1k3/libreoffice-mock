#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEXTENDEDATTRIBUTES_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEXTENDEDATTRIBUTES_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessibleExtendedAttributes.hdl"

#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXAccessibleExtendedAttributesType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXAccessibleExtendedAttributesType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessibleExtendedAttributes" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[1] = { 0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleExtendedAttributes::getExtendedAttributes" );
        // typelib_typedescriptionreference_new( &pMembers[0],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName0.pData );

        // typelib_typedescription_newMIInterface(
        //     &pTD,
        //     sTypeName.pData, 0, 0, 0, 0, 0,
        //     1, aSuperTypes,
        //     1,
        //     pMembers );

        // typelib_typedescription_register( (typelib_TypeDescription**)&pTD );
        // typelib_typedescriptionreference_release( pMembers[0] );
        // typelib_typedescription_release( (typelib_TypeDescription*)pTD );

        return new ::com::sun::star::uno::Type( ::com::sun::star::uno::TypeClass_INTERFACE, sTypeName ); // leaked
    }
};

} } } } }

// namespace com { namespace sun { namespace star { namespace accessibility {

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XAccessibleExtendedAttributes const *) {
//     const ::com::sun::star::uno::Type &rRet = *detail::theXAccessibleExtendedAttributesType::get();
//     // End inline typedescription generation
//     static bool bInitStarted = false;
//     if (!bInitStarted)
//     {
//         ::osl::MutexGuard aGuard( ::osl::Mutex::getGlobalMutex() );
//         if (!bInitStarted)
//         {
//             OSL_DOUBLE_CHECKED_LOCKING_MEMORY_BARRIER();
//             bInitStarted = true;
//             ::cppu::UnoType< ::com::sun::star::uno::RuntimeException >::get();
//             ::cppu::UnoType< ::com::sun::star::lang::IndexOutOfBoundsException >::get();

//             typelib_InterfaceMethodTypeDescription * pMethod = 0;
//             {
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
//                 ::rtl::OUString sReturnType0( "any" );
//                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleExtendedAttributes::getExtendedAttributes" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     3, sal_False,
//                     sMethodName0.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_ANY, sReturnType0.pData,
//                     0, 0,
//                     2, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             typelib_typedescription_release( (typelib_TypeDescription*)pMethod );
//         }
//     }
//     else
//     {
//         OSL_DOUBLE_CHECKED_LOCKING_MEMORY_BARRIER();
//     }
//     return rRet;
// }

// } } } }

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleExtendedAttributes > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleExtendedAttributes > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XAccessibleExtendedAttributes::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleExtendedAttributes > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEXTENDEDATTRIBUTES_HPP
