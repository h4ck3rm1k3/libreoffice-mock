#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLE_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLE_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessible.hdl"

#include "com/sun/star/accessibility/XAccessibleContext.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXAccessibleType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXAccessibleType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessible" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[1] = { 0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessible::getAccessibleContext" );
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

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XAccessible const *) {
//     const ::com::sun::star::uno::Type &rRet = *detail::theXAccessibleType::get();
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

//             typelib_InterfaceMethodTypeDescription * pMethod = 0;
//             {
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType0( "com.sun.star.accessibility.XAccessibleContext" );
//                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessible::getAccessibleContext" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     3, sal_False,
//                     sMethodName0.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE, sReturnType0.pData,
//                     0, 0,
//                     1, the_Exceptions );
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

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XAccessible::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLE_HPP
