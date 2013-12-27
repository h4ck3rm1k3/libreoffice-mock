#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLECOMPONENT_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLECOMPONENT_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessibleComponent.hdl"

#include "com/sun/star/accessibility/XAccessible.hpp"
#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/awt/Size.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/instance.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theXAccessibleComponentType : public rtl::StaticWithInit< ::css::uno::Type *, theXAccessibleComponentType >
{
    ::css::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessibleComponent" );

        // Start inline typedescription generation
        typelib_InterfaceTypeDescription * pTD = 0;

        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< ::css::uno::Reference< ::css::uno::XInterface > >::get().getTypeLibType();
        typelib_TypeDescriptionReference * pMembers[9] = { 0,0,0,0,0,0,0,0,0 };
        ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleComponent::containsPoint" );
        typelib_typedescriptionreference_new( &pMembers[0],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName0.pData );
        ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleComponent::getAccessibleAtPoint" );
        typelib_typedescriptionreference_new( &pMembers[1],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName1.pData );
        ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleComponent::getBounds" );
        typelib_typedescriptionreference_new( &pMembers[2],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName2.pData );
        ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleComponent::getLocation" );
        typelib_typedescriptionreference_new( &pMembers[3],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName3.pData );
        ::rtl::OUString sMethodName4( "com.sun.star.accessibility.XAccessibleComponent::getLocationOnScreen" );
        typelib_typedescriptionreference_new( &pMembers[4],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName4.pData );
        ::rtl::OUString sMethodName5( "com.sun.star.accessibility.XAccessibleComponent::getSize" );
        typelib_typedescriptionreference_new( &pMembers[5],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName5.pData );
        ::rtl::OUString sMethodName6( "com.sun.star.accessibility.XAccessibleComponent::grabFocus" );
        typelib_typedescriptionreference_new( &pMembers[6],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName6.pData );
        ::rtl::OUString sMethodName7( "com.sun.star.accessibility.XAccessibleComponent::getForeground" );
        typelib_typedescriptionreference_new( &pMembers[7],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName7.pData );
        ::rtl::OUString sMethodName8( "com.sun.star.accessibility.XAccessibleComponent::getBackground" );
        typelib_typedescriptionreference_new( &pMembers[8],
                                              (typelib_TypeClass)::css::uno::TypeClass_INTERFACE_METHOD,
                                              sMethodName8.pData );

        typelib_typedescription_newMIInterface(
            &pTD,
            sTypeName.pData, 0, 0, 0, 0, 0,
            1, aSuperTypes,
            9,
            pMembers );

        typelib_typedescription_register( (typelib_TypeDescription**)&pTD );
        typelib_typedescriptionreference_release( pMembers[0] );
        typelib_typedescriptionreference_release( pMembers[1] );
        typelib_typedescriptionreference_release( pMembers[2] );
        typelib_typedescriptionreference_release( pMembers[3] );
        typelib_typedescriptionreference_release( pMembers[4] );
        typelib_typedescriptionreference_release( pMembers[5] );
        typelib_typedescriptionreference_release( pMembers[6] );
        typelib_typedescriptionreference_release( pMembers[7] );
        typelib_typedescriptionreference_release( pMembers[8] );
        typelib_typedescription_release( (typelib_TypeDescription*)pTD );

        return new ::css::uno::Type( ::css::uno::TypeClass_INTERFACE, sTypeName ); // leaked
    }
};

} } } } }

namespace com { namespace sun { namespace star { namespace accessibility {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::accessibility::XAccessibleComponent const *) {
    const ::css::uno::Type &rRet = *detail::theXAccessibleComponentType::get();
    // End inline typedescription generation
    static bool bInitStarted = false;
    if (!bInitStarted)
    {
        ::osl::MutexGuard aGuard( ::osl::Mutex::getGlobalMutex() );
        if (!bInitStarted)
        {
            OSL_DOUBLE_CHECKED_LOCKING_MEMORY_BARRIER();
            bInitStarted = true;
            ::cppu::UnoType< ::css::uno::RuntimeException >::get();

            typelib_InterfaceMethodTypeDescription * pMethod = 0;
            {
                typelib_Parameter_Init aParameters[1];
                ::rtl::OUString sParamName0( "Point" );
                ::rtl::OUString sParamType0( "com.sun.star.awt.Point" );
                aParameters[0].pParamName = sParamName0.pData;
                aParameters[0].eTypeClass = (typelib_TypeClass)::css::uno::TypeClass_STRUCT;
                aParameters[0].pTypeName = sParamType0.pData;
                aParameters[0].bIn = sal_True;
                aParameters[0].bOut = sal_False;
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType0( "boolean" );
                ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleComponent::containsPoint" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    3, sal_False,
                    sMethodName0.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_BOOLEAN, sReturnType0.pData,
                    1, aParameters,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                typelib_Parameter_Init aParameters[1];
                ::rtl::OUString sParamName0( "Point" );
                ::rtl::OUString sParamType0( "com.sun.star.awt.Point" );
                aParameters[0].pParamName = sParamName0.pData;
                aParameters[0].eTypeClass = (typelib_TypeClass)::css::uno::TypeClass_STRUCT;
                aParameters[0].pTypeName = sParamType0.pData;
                aParameters[0].bIn = sal_True;
                aParameters[0].bOut = sal_False;
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType1( "com.sun.star.accessibility.XAccessible" );
                ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleComponent::getAccessibleAtPoint" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    4, sal_False,
                    sMethodName1.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_INTERFACE, sReturnType1.pData,
                    1, aParameters,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType2( "com.sun.star.awt.Rectangle" );
                ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleComponent::getBounds" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    5, sal_False,
                    sMethodName2.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_STRUCT, sReturnType2.pData,
                    0, 0,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType3( "com.sun.star.awt.Point" );
                ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleComponent::getLocation" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    6, sal_False,
                    sMethodName3.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_STRUCT, sReturnType3.pData,
                    0, 0,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType4( "com.sun.star.awt.Point" );
                ::rtl::OUString sMethodName4( "com.sun.star.accessibility.XAccessibleComponent::getLocationOnScreen" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    7, sal_False,
                    sMethodName4.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_STRUCT, sReturnType4.pData,
                    0, 0,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType5( "com.sun.star.awt.Size" );
                ::rtl::OUString sMethodName5( "com.sun.star.accessibility.XAccessibleComponent::getSize" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    8, sal_False,
                    sMethodName5.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_STRUCT, sReturnType5.pData,
                    0, 0,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType6( "void" );
                ::rtl::OUString sMethodName6( "com.sun.star.accessibility.XAccessibleComponent::grabFocus" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    9, sal_False,
                    sMethodName6.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_VOID, sReturnType6.pData,
                    0, 0,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType7( "long" );
                ::rtl::OUString sMethodName7( "com.sun.star.accessibility.XAccessibleComponent::getForeground" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    10, sal_False,
                    sMethodName7.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_LONG, sReturnType7.pData,
                    0, 0,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            {
                ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
                rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
                ::rtl::OUString sReturnType8( "long" );
                ::rtl::OUString sMethodName8( "com.sun.star.accessibility.XAccessibleComponent::getBackground" );
                typelib_typedescription_newInterfaceMethod( &pMethod,
                    11, sal_False,
                    sMethodName8.pData,
                    (typelib_TypeClass)::css::uno::TypeClass_LONG, sReturnType8.pData,
                    0, 0,
                    1, the_Exceptions );
                typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
            }
            typelib_typedescription_release( (typelib_TypeDescription*)pMethod );
        }
    }
    else
    {
        OSL_DOUBLE_CHECKED_LOCKING_MEMORY_BARRIER();
    }
    return rRet;
}

} } } }

inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::accessibility::XAccessibleComponent > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::accessibility::XAccessibleComponent > >::get();
}

::css::uno::Type const & ::css::accessibility::XAccessibleComponent::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::getCppuType(static_cast< ::css::uno::Reference< ::css::accessibility::XAccessibleComponent > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLECOMPONENT_HPP
