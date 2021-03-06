#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XMSAASERVICE_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XMSAASERVICE_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XMSAAService.hdl"

#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXMSAAServiceType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXMSAAServiceType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XMSAAService" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[2] = { 0,0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XMSAAService::getAccObjectPtr" );
        // typelib_typedescriptionreference_new( &pMembers[0],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName0.pData );
        // ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XMSAAService::handleWindowOpened" );
        // typelib_typedescriptionreference_new( &pMembers[1],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName1.pData );

        // typelib_typedescription_newMIInterface(
        //     &pTD,
        //     sTypeName.pData, 0, 0, 0, 0, 0,
        //     1, aSuperTypes,
        //     2,
        //     pMembers );

        // typelib_typedescription_register( (typelib_TypeDescription**)&pTD );
        // typelib_typedescriptionreference_release( pMembers[0] );
        // typelib_typedescriptionreference_release( pMembers[1] );
        // typelib_typedescription_release( (typelib_TypeDescription*)pTD );

        return new ::com::sun::star::uno::Type( ::com::sun::star::uno::TypeClass_INTERFACE, sTypeName ); // leaked
    }
};

} } } } }

// namespace com { namespace sun { namespace star { namespace accessibility {

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XMSAAService const *) {
//     const ::com::sun::star::uno::Type &rRet = *detail::theXMSAAServiceType::get();
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
//                 typelib_Parameter_Init aParameters[3];
//                 ::rtl::OUString sParamName0( "hWnd" );
//                 ::rtl::OUString sParamType0( "hyper" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_HYPER;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "lParam" );
//                 ::rtl::OUString sParamType1( "hyper" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_HYPER;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString sParamName2( "wParam" );
//                 ::rtl::OUString sParamType2( "hyper" );
//                 aParameters[2].pParamName = sParamName2.pData;
//                 aParameters[2].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_HYPER;
//                 aParameters[2].pTypeName = sParamType2.pData;
//                 aParameters[2].bIn = sal_True;
//                 aParameters[2].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType0( "hyper" );
//                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XMSAAService::getAccObjectPtr" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     6, sal_False,
//                     sMethodName0.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_HYPER, sReturnType0.pData,
//                     3, aParameters,
//                     1, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[1];
//                 ::rtl::OUString sParamName0( "i" );
//                 ::rtl::OUString sParamType0( "hyper" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_HYPER;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType1( "void" );
//                 ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XMSAAService::handleWindowOpened" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     7, sal_False,
//                     sMethodName1.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_VOID, sReturnType1.pData,
//                     1, aParameters,
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

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XMSAAService > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XMSAAService > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XMSAAService::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XMSAAService > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XMSAASERVICE_HPP
