#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXT_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXT_HPP

#include "sal/config.h"

#include <exception>

#include "com/sun/star/accessibility/XAccessibleText.hdl"

#include "com/sun/star/accessibility/TextSegment.hpp"
#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
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

struct theXAccessibleTextType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theXAccessibleTextType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString sTypeName( "com.sun.star.accessibility.XAccessibleText" );

        // // Start inline typedescription generation
        // typelib_InterfaceTypeDescription * pTD = 0;

        // typelib_TypeDescriptionReference * aSuperTypes[1];
        // aSuperTypes[0] = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType();
        // typelib_TypeDescriptionReference * pMembers[17] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
        // ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleText::getCaretPosition" );
        // typelib_typedescriptionreference_new( &pMembers[0],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName0.pData );
        // ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleText::setCaretPosition" );
        // typelib_typedescriptionreference_new( &pMembers[1],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName1.pData );
        // ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleText::getCharacter" );
        // typelib_typedescriptionreference_new( &pMembers[2],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName2.pData );
        // ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleText::getCharacterAttributes" );
        // typelib_typedescriptionreference_new( &pMembers[3],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName3.pData );
        // ::rtl::OUString sMethodName4( "com.sun.star.accessibility.XAccessibleText::getCharacterBounds" );
        // typelib_typedescriptionreference_new( &pMembers[4],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName4.pData );
        // ::rtl::OUString sMethodName5( "com.sun.star.accessibility.XAccessibleText::getCharacterCount" );
        // typelib_typedescriptionreference_new( &pMembers[5],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName5.pData );
        // ::rtl::OUString sMethodName6( "com.sun.star.accessibility.XAccessibleText::getIndexAtPoint" );
        // typelib_typedescriptionreference_new( &pMembers[6],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName6.pData );
        // ::rtl::OUString sMethodName7( "com.sun.star.accessibility.XAccessibleText::getSelectedText" );
        // typelib_typedescriptionreference_new( &pMembers[7],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName7.pData );
        // ::rtl::OUString sMethodName8( "com.sun.star.accessibility.XAccessibleText::getSelectionStart" );
        // typelib_typedescriptionreference_new( &pMembers[8],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName8.pData );
        // ::rtl::OUString sMethodName9( "com.sun.star.accessibility.XAccessibleText::getSelectionEnd" );
        // typelib_typedescriptionreference_new( &pMembers[9],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName9.pData );
        // ::rtl::OUString sMethodName10( "com.sun.star.accessibility.XAccessibleText::setSelection" );
        // typelib_typedescriptionreference_new( &pMembers[10],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName10.pData );
        // ::rtl::OUString sMethodName11( "com.sun.star.accessibility.XAccessibleText::getText" );
        // typelib_typedescriptionreference_new( &pMembers[11],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName11.pData );
        // ::rtl::OUString sMethodName12( "com.sun.star.accessibility.XAccessibleText::getTextRange" );
        // typelib_typedescriptionreference_new( &pMembers[12],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName12.pData );
        // ::rtl::OUString sMethodName13( "com.sun.star.accessibility.XAccessibleText::getTextAtIndex" );
        // typelib_typedescriptionreference_new( &pMembers[13],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName13.pData );
        // ::rtl::OUString sMethodName14( "com.sun.star.accessibility.XAccessibleText::getTextBeforeIndex" );
        // typelib_typedescriptionreference_new( &pMembers[14],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName14.pData );
        // ::rtl::OUString sMethodName15( "com.sun.star.accessibility.XAccessibleText::getTextBehindIndex" );
        // typelib_typedescriptionreference_new( &pMembers[15],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName15.pData );
        // ::rtl::OUString sMethodName16( "com.sun.star.accessibility.XAccessibleText::copyText" );
        // typelib_typedescriptionreference_new( &pMembers[16],
        //                                       (typelib_TypeClass)::com::sun::star::uno::TypeClass_INTERFACE_METHOD,
        //                                       sMethodName16.pData );

        // typelib_typedescription_newMIInterface(
        //     &pTD,
        //     sTypeName.pData, 0, 0, 0, 0, 0,
        //     1, aSuperTypes,
        //     17,
        //     pMembers );

        // typelib_typedescription_register( (typelib_TypeDescription**)&pTD );
        // typelib_typedescriptionreference_release( pMembers[0] );
        // typelib_typedescriptionreference_release( pMembers[1] );
        // typelib_typedescriptionreference_release( pMembers[2] );
        // typelib_typedescriptionreference_release( pMembers[3] );
        // typelib_typedescriptionreference_release( pMembers[4] );
        // typelib_typedescriptionreference_release( pMembers[5] );
        // typelib_typedescriptionreference_release( pMembers[6] );
        // typelib_typedescriptionreference_release( pMembers[7] );
        // typelib_typedescriptionreference_release( pMembers[8] );
        // typelib_typedescriptionreference_release( pMembers[9] );
        // typelib_typedescriptionreference_release( pMembers[10] );
        // typelib_typedescriptionreference_release( pMembers[11] );
        // typelib_typedescriptionreference_release( pMembers[12] );
        // typelib_typedescriptionreference_release( pMembers[13] );
        // typelib_typedescriptionreference_release( pMembers[14] );
        // typelib_typedescriptionreference_release( pMembers[15] );
        // typelib_typedescriptionreference_release( pMembers[16] );
        // typelib_typedescription_release( (typelib_TypeDescription*)pTD );

        return new ::com::sun::star::uno::Type( ::com::sun::star::uno::TypeClass_INTERFACE, sTypeName ); // leaked
    }
};

} } } } }

// // namespace com { namespace sun { namespace star { namespace accessibility {

// // inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::XAccessibleText const *) {
// //     const ::com::sun::star::uno::Type &rRet = *detail::theXAccessibleTextType::get();
// //     // End inline typedescription generation
// //     static bool bInitStarted = false;
// //     if (!bInitStarted)
// //     {
// //         ::osl::MutexGuard aGuard( ::osl::Mutex::getGlobalMutex() );
// //         if (!bInitStarted)
// //         {
// //             OSL_DOUBLE_CHECKED_LOCKING_MEMORY_BARRIER();
// //             bInitStarted = true;
// //             ::cppu::UnoType< ::com::sun::star::uno::RuntimeException >::get();
// //             ::cppu::UnoType< ::com::sun::star::lang::IndexOutOfBoundsException >::get();
// //             ::cppu::UnoType< ::com::sun::star::lang::IllegalArgumentException >::get();

// //             typelib_InterfaceMethodTypeDescription * pMethod = 0;
// //             {
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
// //                 ::rtl::OUString sReturnType0( "long" );
// //                 ::rtl::OUString sMethodName0( "com.sun.star.accessibility.XAccessibleText::getCaretPosition" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     3, sal_False,
// //                     sMethodName0.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType0.pData,
// //                     0, 0,
// //                     1, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 typelib_Parameter_Init aParameters[1];
// //                 ::rtl::OUString sParamName0( "nIndex" );
// //                 ::rtl::OUString sParamType0( "long" );
// //                 aParameters[0].pParamName = sParamName0.pData;
// //                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
// //                 aParameters[0].pTypeName = sParamType0.pData;
// //                 aParameters[0].bIn = sal_True;
// //                 aParameters[0].bOut = sal_False;
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
// //                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
// //                 ::rtl::OUString sReturnType1( "boolean" );
// //                 ::rtl::OUString sMethodName1( "com.sun.star.accessibility.XAccessibleText::setCaretPosition" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     4, sal_False,
// //                     sMethodName1.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_BOOLEAN, sReturnType1.pData,
// //                     1, aParameters,
// //                     2, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 typelib_Parameter_Init aParameters[1];
// //                 ::rtl::OUString sParamName0( "nIndex" );
// //                 ::rtl::OUString sParamType0( "long" );
// //                 aParameters[0].pParamName = sParamName0.pData;
// //                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
// //                 aParameters[0].pTypeName = sParamType0.pData;
// //                 aParameters[0].bIn = sal_True;
// //                 aParameters[0].bOut = sal_False;
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
// //                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
// //                 ::rtl::OUString sReturnType2( "char" );
// //                 ::rtl::OUString sMethodName2( "com.sun.star.accessibility.XAccessibleText::getCharacter" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     5, sal_False,
// //                     sMethodName2.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_CHAR, sReturnType2.pData,
// //                     1, aParameters,
// //                     2, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 typelib_Parameter_Init aParameters[2];
// //                 ::rtl::OUString sParamName0( "nIndex" );
// //                 ::rtl::OUString sParamType0( "long" );
// //                 aParameters[0].pParamName = sParamName0.pData;
// //                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
// //                 aParameters[0].pTypeName = sParamType0.pData;
// //                 aParameters[0].bIn = sal_True;
// //                 aParameters[0].bOut = sal_False;
// //                 ::rtl::OUString sParamName1( "aRequestedAttributes" );
// //                 ::rtl::OUString sParamType1( "[]string" );
// //                 aParameters[1].pParamName = sParamName1.pData;
// //                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_SEQUENCE;
// //                 aParameters[1].pTypeName = sParamType1.pData;
// //                 aParameters[1].bIn = sal_True;
// //                 aParameters[1].bOut = sal_False;
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
// //                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
// //                 ::rtl::OUString sReturnType3( "[]com.sun.star.beans.PropertyValue" );
// //                 ::rtl::OUString sMethodName3( "com.sun.star.accessibility.XAccessibleText::getCharacterAttributes" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     6, sal_False,
// //                     sMethodName3.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_SEQUENCE, sReturnType3.pData,
// //                     2, aParameters,
// //                     2, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 typelib_Parameter_Init aParameters[1];
// //                 ::rtl::OUString sParamName0( "nIndex" );
// //                 ::rtl::OUString sParamType0( "long" );
// //                 aParameters[0].pParamName = sParamName0.pData;
// //                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
// //                 aParameters[0].pTypeName = sParamType0.pData;
// //                 aParameters[0].bIn = sal_True;
// //                 aParameters[0].bOut = sal_False;
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
// //                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
// //                 ::rtl::OUString sReturnType4( "com.sun.star.awt.Rectangle" );
// //                 ::rtl::OUString sMethodName4( "com.sun.star.accessibility.XAccessibleText::getCharacterBounds" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     7, sal_False,
// //                     sMethodName4.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRUCT, sReturnType4.pData,
// //                     1, aParameters,
// //                     2, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
// //                 ::rtl::OUString sReturnType5( "long" );
// //                 ::rtl::OUString sMethodName5( "com.sun.star.accessibility.XAccessibleText::getCharacterCount" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     8, sal_False,
// //                     sMethodName5.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType5.pData,
// //                     0, 0,
// //                     1, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 typelib_Parameter_Init aParameters[1];
// //                 ::rtl::OUString sParamName0( "aPoint" );
// //                 ::rtl::OUString sParamType0( "com.sun.star.awt.Point" );
// //                 aParameters[0].pParamName = sParamName0.pData;
// //                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRUCT;
// //                 aParameters[0].pTypeName = sParamType0.pData;
// //                 aParameters[0].bIn = sal_True;
// //                 aParameters[0].bOut = sal_False;
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
// //                 ::rtl::OUString sReturnType6( "long" );
// //                 ::rtl::OUString sMethodName6( "com.sun.star.accessibility.XAccessibleText::getIndexAtPoint" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     9, sal_False,
// //                     sMethodName6.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType6.pData,
// //                     1, aParameters,
// //                     1, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
// //                 ::rtl::OUString sReturnType7( "string" );
// //                 ::rtl::OUString sMethodName7( "com.sun.star.accessibility.XAccessibleText::getSelectedText" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     10, sal_False,
// //                     sMethodName7.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRING, sReturnType7.pData,
// //                     0, 0,
// //                     1, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
// //                 ::rtl::OUString sReturnType8( "long" );
// //                 ::rtl::OUString sMethodName8( "com.sun.star.accessibility.XAccessibleText::getSelectionStart" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     11, sal_False,
// //                     sMethodName8.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType8.pData,
// //                     0, 0,
// //                     1, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
// //                 ::rtl::OUString sReturnType9( "long" );
// //                 ::rtl::OUString sMethodName9( "com.sun.star.accessibility.XAccessibleText::getSelectionEnd" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     12, sal_False,
// //                     sMethodName9.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG, sReturnType9.pData,
// //                     0, 0,
// //                     1, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 typelib_Parameter_Init aParameters[2];
// //                 ::rtl::OUString sParamName0( "nStartIndex" );
// //                 ::rtl::OUString sParamType0( "long" );
// //                 aParameters[0].pParamName = sParamName0.pData;
// //                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
// //                 aParameters[0].pTypeName = sParamType0.pData;
// //                 aParameters[0].bIn = sal_True;
// //                 aParameters[0].bOut = sal_False;
// //                 ::rtl::OUString sParamName1( "nEndIndex" );
// //                 ::rtl::OUString sParamType1( "long" );
// //                 aParameters[1].pParamName = sParamName1.pData;
// //                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
// //                 aParameters[1].pTypeName = sParamType1.pData;
// //                 aParameters[1].bIn = sal_True;
// //                 aParameters[1].bOut = sal_False;
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
// //                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
// //                 ::rtl::OUString sReturnType10( "boolean" );
// //                 ::rtl::OUString sMethodName10( "com.sun.star.accessibility.XAccessibleText::setSelection" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     13, sal_False,
// //                     sMethodName10.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_BOOLEAN, sReturnType10.pData,
// //                     2, aParameters,
// //                     2, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 ::rtl::OUString the_ExceptionName0( "com.sun.star.uno.RuntimeException" );
// //                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData };
// //                 ::rtl::OUString sReturnType11( "string" );
// //                 ::rtl::OUString sMethodName11( "com.sun.star.accessibility.XAccessibleText::getText" );
// //                 typelib_typedescription_newInterfaceMethod( &pMethod,
// //                     14, sal_False,
// //                     sMethodName11.pData,
// //                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRING, sReturnType11.pData,
// //                     0, 0,
// //                     1, the_Exceptions );
// //                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
// //             }
// //             {
// //                 typelib_Parameter_Init aParameters[2];
// //                 ::rtl::OUString sParamName0( "nStartIndex" );
// //                 ::rtl::OUString sParamType0( "long" );
// //                 aParameters[0].pParamName = sParamName0.pData;
// //                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
// //                 aParameters[0].pTypeName = sParamType0.pData;
// //                 aParameters[0].bIn = sal_True;
// //                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "nEndIndex" );
//                 ::rtl::OUString sParamType1( "long" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
//                 ::rtl::OUString sReturnType12( "string" );
// //                 ::rtl::OUString sMethodName12( "com.sun.star.accessibility.XAccessibleText::getTextRange" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     15, sal_False,
//                     sMethodName12.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRING, sReturnType12.pData,
//                     2, aParameters,
//                     2, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[2];
//                 ::rtl::OUString sParamName0( "nIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "nTextType" );
//                 ::rtl::OUString sParamType1( "short" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_SHORT;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.lang.IllegalArgumentException" );
//                 ::rtl::OUString the_ExceptionName2( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData, the_ExceptionName2.pData };
//                 ::rtl::OUString sReturnType13( "com.sun.star.accessibility.TextSegment" );
//                 ::rtl::OUString sMethodName13( "com.sun.star.accessibility.XAccessibleText::getTextAtIndex" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     16, sal_False,
//                     sMethodName13.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRUCT, sReturnType13.pData,
//                     2, aParameters,
//                     3, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[2];
//                 ::rtl::OUString sParamName0( "nIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "nTextType" );
//                 ::rtl::OUString sParamType1( "short" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_SHORT;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.lang.IllegalArgumentException" );
//                 ::rtl::OUString the_ExceptionName2( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData, the_ExceptionName2.pData };
//                 ::rtl::OUString sReturnType14( "com.sun.star.accessibility.TextSegment" );
//                 ::rtl::OUString sMethodName14( "com.sun.star.accessibility.XAccessibleText::getTextBeforeIndex" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     17, sal_False,
//                     sMethodName14.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRUCT, sReturnType14.pData,
//                     2, aParameters,
//                     3, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[2];
//                 ::rtl::OUString sParamName0( "nIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "nTextType" );
//                 ::rtl::OUString sParamType1( "short" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_SHORT;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.lang.IllegalArgumentException" );
//                 ::rtl::OUString the_ExceptionName2( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData, the_ExceptionName2.pData };
//                 ::rtl::OUString sReturnType15( "com.sun.star.accessibility.TextSegment" );
//                 ::rtl::OUString sMethodName15( "com.sun.star.accessibility.XAccessibleText::getTextBehindIndex" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     18, sal_False,
//                     sMethodName15.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_STRUCT, sReturnType15.pData,
//                     2, aParameters,
//                     3, the_Exceptions );
//                 typelib_typedescription_register( (typelib_TypeDescription**)&pMethod );
//             }
//             {
//                 typelib_Parameter_Init aParameters[2];
//                 ::rtl::OUString sParamName0( "nStartIndex" );
//                 ::rtl::OUString sParamType0( "long" );
//                 aParameters[0].pParamName = sParamName0.pData;
//                 aParameters[0].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[0].pTypeName = sParamType0.pData;
//                 aParameters[0].bIn = sal_True;
//                 aParameters[0].bOut = sal_False;
//                 ::rtl::OUString sParamName1( "nEndIndex" );
//                 ::rtl::OUString sParamType1( "long" );
//                 aParameters[1].pParamName = sParamName1.pData;
//                 aParameters[1].eTypeClass = (typelib_TypeClass)::com::sun::star::uno::TypeClass_LONG;
//                 aParameters[1].pTypeName = sParamType1.pData;
//                 aParameters[1].bIn = sal_True;
//                 aParameters[1].bOut = sal_False;
//                 ::rtl::OUString the_ExceptionName0( "com.sun.star.lang.IndexOutOfBoundsException" );
//                 ::rtl::OUString the_ExceptionName1( "com.sun.star.uno.RuntimeException" );
//                 rtl_uString * the_Exceptions[] = { the_ExceptionName0.pData, the_ExceptionName1.pData };
//                 ::rtl::OUString sReturnType16( "boolean" );
//                 ::rtl::OUString sMethodName16( "com.sun.star.accessibility.XAccessibleText::copyText" );
//                 typelib_typedescription_newInterfaceMethod( &pMethod,
//                     19, sal_False,
//                     sMethodName16.pData,
//                     (typelib_TypeClass)::com::sun::star::uno::TypeClass_BOOLEAN, sReturnType16.pData,
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

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleText > const *)  {
//     return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleText > >::get();
// }

// ::com::sun::star::uno::Type const & ::com::sun::star::accessibility::XAccessibleText::static_type(SAL_UNUSED_PARAMETER void *) {
//     return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleText > * >(0));
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXT_HPP
