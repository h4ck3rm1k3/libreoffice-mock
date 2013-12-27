#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEHYPERLINK_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEHYPERLINK_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessibleHyperlink.hdl"

#include "com/sun/star/accessibility/XAccessibleAction.hpp"
#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXAccessibleHyperlinkType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXAccessibleHyperlinkType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessibleHyperlink" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleAction > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[5] = { 0,0,0,0,0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleHyperlink::getAccessibleActionAnchor" );
        // typelib_typedescriptionreference_new( &pMembers[0],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName0.pData );
        // ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleHyperlink::getAccessibleActionObject" );
        // typelib_typedescriptionreference_new( &pMembers[1],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName1.pData );
        // ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleHyperlink::getStartIndex" );
        // typelib_typedescriptionreference_new( &pMembers[2],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName2.pData );
        // ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleHyperlink::getEndIndex" );
        // typelib_typedescriptionreference_new( &pMembers[3],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName3.pData );
        // ::rtl::OUString sMethodName4( "com.sun.star.accessibility.XAccessibleHyperlink::isValid" );
        // typelib_typedescriptionreference_new( &pMembers[4],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName4.pData );

        // typelib_typedescription_newMIInterface(
        //     &pTD,
        //     sTypeName.pData, 0, 0, 0, 0, 0,
        //     1, aSuperTypes,
        //     5,
        //     pMembers );

        // typelib_typedescription_register( (typelib_TypeDescription**)&pTD );
        // typelib_typedescriptionreference_release( pMembers[0] );
        // typelib_typedescriptionreference_release( pMembers[1] );
        // typelib_typedescriptionreference_release( pMembers[2] );
        // typelib_typedescriptionreference_release( pMembers[3] );
        // typelib_typedescriptionreference_release( pMembers[4] );
        // typelib_typedescription_release( (typelib_TypeDescription*)pTD );

        return new ::com::sun::star::uno::Type( ::com::sun::star::uno::TypeClass_INTERFACE, sTypeName ); // leaked
    }
};

} } } } }

// namespace com { namespace sun { namespace star { namespace accessibility {

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XAccessibleHyperlink const *) {
//     const ::com::sun::star::uno::Type &rRet = *detail::theXAccessibleHyperlinkType::get();
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
//                 typelib_Parameter_Init aParameters[1];
//                 ::rtl::OUString sParamName0( "nIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
//                 ::rtl::OUString sReturnType0( "any" );
//                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleHyperlink::getAccessibleActionAnchor" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     7, sal_False,
//                     sMethodName0.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_ANY, sReturnType0.pData,
//                     1, aParameters,
//                     2, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[1];
//                 ::rtl::OUString sParamName0( "nIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
//                 ::rtl::OUString sReturnType1( "any" );
//                 ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleHyperlink::getAccessibleActionObject" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     8, sal_False,
//                     sMethodName1.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_ANY, sReturnType1.pData,
//                     1, aParameters,
//                     2, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType2( "long" );
//                 ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleHyperlink::getStartIndex" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     9, sal_False,
//                     sMethodName2.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType2.pData,
//                     0, 0,
//                     1, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType3( "long" );
//                 ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleHyperlink::getEndIndex" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     10, sal_False,
//                     sMethodName3.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType3.pData,
//                     0, 0,
//                     1, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType4( "boolean" );
//                 ::rtl::OUString sMethodName4( "com.sun.star.accessibility.XAccessibleHyperlink::isValid" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     11, sal_False,
//                     sMethodName4.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_BOOLEAN, sReturnType4.pData,
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

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleHyperlink > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleHyperlink > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XAccessibleHyperlink::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleHyperlink > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEHYPERLINK_HPP
