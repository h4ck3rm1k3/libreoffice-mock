#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTMARKUP_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTMARKUP_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessibleTextMarkup.hdl"

#include "com/sun/star/accessibility/TextSegment.hpp"
#include "com/sun/star/accessibility/XAccessibleText.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXAccessibleTextMarkupType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXAccessibleTextMarkupType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessibleTextMarkup" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleText > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[3] = { 0,0,0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleTextMarkup::getTextMarkupCount" );
        // typelib_typedescriptionreference_new( &pMembers[0],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName0.pData );
        // ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleTextMarkup::getTextMarkup" );
        // typelib_typedescriptionreference_new( &pMembers[1],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName1.pData );
        // ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleTextMarkup::getTextMarkupAtIndex" );
        // typelib_typedescriptionreference_new( &pMembers[2],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName2.pData );

        // typelib_typedescription_newMIInterface(
        //     &pTD,
        //     sTypeName.pData, 0, 0, 0, 0, 0,
        //     1, aSuperTypes,
        //     3,
        //     pMembers );

        // typelib_typedescription_register( (typelib_TypeDescription**)&pTD );
        // typelib_typedescriptionreference_release( pMembers[0] );
        // typelib_typedescriptionreference_release( pMembers[1] );
        // typelib_typedescriptionreference_release( pMembers[2] );
        // typelib_typedescription_release( (typelib_TypeDescription*)pTD );

        return new ::com::sun::star::uno::Type( ::com::sun::star::uno::TypeClass_INTERFACE, sTypeName ); // leaked
    }
};

} } } } }

// namespace com { namespace sun { namespace star { namespace accessibility {

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XAccessibleTextMarkup const *) {
//     const ::com::sun::star::uno::Type &rRet = *detail::theXAccessibleTextMarkupType::get();
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
//             ::cppu::UnoType< ::com::sun::star::lang::IllegalArgumentException >::get();
//             ::cppu::UnoType< ::com::sun::star::lang::IndexOutOfBoundsException >::get();

//             typelib_InterfaceMethodTypeDescription * pMethod = 0;
//             {
//                 typelib_Parameter_Init aParameters[1];
//                 ::rtl::OUString sParamName0( "TextMarkupType" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IllegalArgumentException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
//                 ::rtl::OUString sReturnType0( "long" );
//                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleTextMarkup::getTextMarkupCount" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     20, sal_False,
//                     sMethodName0.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType0.pData,
//                     1, aParameters,
//                     2, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[2];
//                 ::rtl::OUString sParamName0( "TextMarkupIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "TextMarkupType" );
//                 ::rtl::OUString sParamType1( "long" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.lang.IllegalArgumentException" );
//                 ::rtl::OUString the_ExceptionName2( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData, the_ExceptionName2.pData };
//                 ::rtl::OUString sReturnType1( "com.sun.star.accessibility.TextSegment" );
//                 ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleTextMarkup::getTextMarkup" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     21, sal_False,
//                     sMethodName1.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRUCT, sReturnType1.pData,
//                     2, aParameters,
//                     3, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[2];
//                 ::rtl::OUString sParamName0( "CharIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "TextMarkupType" );
//                 ::rtl::OUString sParamType1( "long" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.lang.IllegalArgumentException" );
//                 ::rtl::OUString the_ExceptionName2( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData, the_ExceptionName2.pData };
//                 ::rtl::OUString sReturnType2( "[]com.sun.star.accessibility.TextSegment" );
//                 ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleTextMarkup::getTextMarkupAtIndex" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     22, sal_False,
//                     sMethodName2.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_SEQUENCE, sReturnType2.pData,
//                     2, aParameters,
//                     3, the_Exceptions );
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

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleTextMarkup > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleTextMarkup > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XAccessibleTextMarkup::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleTextMarkup > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTMARKUP_HPP
