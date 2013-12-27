#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTOBJECT_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTOBJECT_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/AccessibleEventObject.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "rtl/instance.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace accessibility {

inline AccessibleEventObject::AccessibleEventObject() 
    : ::com::sun::star::lang::EventObject()
    , EventId(0)
    , NewValue()
    , OldValue()
{
}

inline AccessibleEventObject::AccessibleEventObject(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& EventId_, const ::com::sun::star::uno::Any& NewValue_, const ::com::sun::star::uno::Any& OldValue_) 
    : ::com::sun::star::lang::EventObject(Source_)
    , EventId(EventId_)
    , NewValue(NewValue_)
    , OldValue(OldValue_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theAccessibleEventObjectType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theAccessibleEventObjectType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString the_name( "com.sun.star.accessibility.AccessibleEventObject" );
        // ::rtl::OUString the_tname0( "short" );
        // ::rtl::OUString the_name0( "EventId" );
        // ::rtl::OUString the_tname1( "any" );
        // ::rtl::OUString the_name1( "NewValue" );
        // ::rtl::OUString the_name2( "OldValue" );
        // ::typelib_StructMember_Init the_members[] = {
        //     { { typelib_TypeClass_SHORT, the_tname0.pData, the_name0.pData }, false },
        //     { { typelib_TypeClass_ANY, the_tname1.pData, the_name1.pData }, false },
        //     { { typelib_TypeClass_ANY, the_tname1.pData, the_name2.pData }, false } };
        // ::typelib_TypeDescription * the_newType = 0;
        // ::typelib_typedescription_newStruct(&the_newType, the_name.pData, ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members);
        // ::typelib_typedescription_register(&the_newType);
        // ::typelib_typedescription_release(the_newType);
        return new ::com::sun::star::uno::Type(::com::sun::star::uno::TypeClass_STRUCT, the_name); // leaked
    }
};
} } } } }

// namespace com { namespace sun { namespace star { namespace accessibility {

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::AccessibleEventObject const *) {
//     return *detail::theAccessibleEventObjectType::get();
// }

// } } } }

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::AccessibleEventObject const *)  {
//     return ::cppu::UnoType< ::com::sun::star::accessibility::AccessibleEventObject >::get();
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTOBJECT_HPP
