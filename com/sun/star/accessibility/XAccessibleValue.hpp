#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEVALUE_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEVALUE_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessibleValue.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXAccessibleValueType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXAccessibleValueType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessibleValue" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[4] = { 0,0,0,0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleValue::getCurrentValue" );
        // typelib_typedescriptionreference_new( &pMembers[0],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName0.pData );
        // ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleValue::setCurrentValue" );
        // typelib_typedescriptionreference_new( &pMembers[1],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName1.pData );
        // ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleValue::getMaximumValue" );
        // typelib_typedescriptionreference_new( &pMembers[2],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName2.pData );
        // ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleValue::getMinimumValue" );
        // typelib_typedescriptionreference_new( &pMembers[3],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName3.pData );

        // typelib_typedescription_newMIInterface(
        //     &pTD,
        //     sTypeName.pData, 0, 0, 0, 0, 0,
        //     1, aSuperTypes,
        //     4,
        //     pMembers );

        // typelib_typedescription_register( (typelib_TypeDescription**)&pTD );
        // typelib_typedescriptionreference_release( pMembers[0] );
        // typelib_typedescriptionreference_release( pMembers[1] );
        // typelib_typedescriptionreference_release( pMembers[2] );
        // typelib_typedescriptionreference_release( pMembers[3] );
        // typelib_typedescription_release( (typelib_TypeDescription*)pTD );

        return new ::com::sun::star::uno::Type( ::com::sun::star::uno::TypeClass_INTERFACE, sTypeName ); // leaked
    }
};

} } } } }

// namespace com { namespace sun { namespace star { namespace accessibility {

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XAccessibleValue const *) {
//     const ::com::sun::star::uno::Type &rRet = *detail::theXAccessibleValueType::get();
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
//                 ::rtl::OUString sReturnType0( "any" );
//                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleValue::getCurrentValue" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     3, sal_False,
//                     sMethodName0.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_ANY, sReturnType0.pData,
//                     0, 0,
//                     1, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[1];
//                 ::rtl::OUString sParamName0( "aNumber" );
//                 ::rtl::OUString sParamType0( "any" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_ANY;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType1( "boolean" );
//                 ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleValue::setCurrentValue" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     4, sal_False,
//                     sMethodName1.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_BOOLEAN, sReturnType1.pData,
//                     1, aParameters,
//                     1, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType2( "any" );
//                 ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleValue::getMaximumValue" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     5, sal_False,
//                     sMethodName2.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_ANY, sReturnType2.pData,
//                     0, 0,
//                     1, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType3( "any" );
//                 ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleValue::getMinimumValue" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     6, sal_False,
//                     sMethodName3.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_ANY, sReturnType3.pData,
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

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleValue > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleValue > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XAccessibleValue::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleValue > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEVALUE_HPP
