#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTATTRIBUTES_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTATTRIBUTES_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessibleTextAttributes.hdl"

#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "rtl/instance.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXAccessibleTextAttributesType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXAccessibleTextAttributesType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessibleTextAttributes" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[2] = { 0,0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleTextAttributes::getDefaultAttributes" );
        // typelib_typedescriptionreference_new( &pMembers[0],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName0.pData );
        // ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleTextAttributes::getRunAttributes" );
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

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XAccessibleTextAttributes const *) {
//     const ::com::sun::star::uno::Type &rRet = *detail::theXAccessibleTextAttributesType::get();
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
//                 ::rtl::OUString sParamName0( "RequestedAttributes" );
//                 ::rtl::OUString sParamType0( "[]string" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_SEQUENCE;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
//                 ::rtl::OUString sReturnType0( "[]com.sun.star.beans.PropertyValue" );
//                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleTextAttributes::getDefaultAttributes" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     3, sal_False,
//                     sMethodName0.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_SEQUENCE, sReturnType0.pData,
//                     1, aParameters,
//                     1, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[2];
//                 ::rtl::OUString sParamName0( "Index" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "RequestedAttributes" );
//                 ::rtl::OUString sParamType1( "[]string" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_SEQUENCE;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
//                 ::rtl::OUString sReturnType1( "[]com.sun.star.beans.PropertyValue" );
//                 ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleTextAttributes::getRunAttributes" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     4, sal_False,
//                     sMethodName1.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_SEQUENCE, sReturnType1.pData,
//                     2, aParameters,
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

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleTextAttributes > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleTextAttributes > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XAccessibleTextAttributes::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleTextAttributes > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTATTRIBUTES_HPP
