#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGE_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGE_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/AccessibleTableModelChange.hdl"

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

inline AccessibleTableModelChange::AccessibleTableModelChange() 
    : Type(0)
    , FirstRow(0)
    , LastRow(0)
    , FirstColumn(0)
    , LastColumn(0)
{
}

inline AccessibleTableModelChange::AccessibleTableModelChange(const ::sal_Int16& Type_, const ::sal_Int32& FirstRow_, const ::sal_Int32& LastRow_, const ::sal_Int32& FirstColumn_, const ::sal_Int32& LastColumn_) 
    : Type(Type_)
    , FirstRow(FirstRow_)
    , LastRow(LastRow_)
    , FirstColumn(FirstColumn_)
    , LastColumn(LastColumn_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theAccessibleTableModelChangeType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theAccessibleTableModelChangeType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString the_name( "com.sun.star.accessibility.AccessibleTableModelChange" );
        ::rtl::OUString the_tname0( "short" );
        ::rtl::OUString the_name0( "Type" );
        ::rtl::OUString the_tname1( "long" );
        ::rtl::OUString the_name1( "FirstRow" );
        ::rtl::OUString the_name2( "LastRow" );
        ::rtl::OUString the_name3( "FirstColumn" );
        ::rtl::OUString the_name4( "LastColumn" );
        ::typelib_StructMember_Init the_members[] = {
            { { typelib_TypeClass_SHORT, the_tname0.pData, the_name0.pData }, false },
            { { typelib_TypeClass_LONG, the_tname1.pData, the_name1.pData }, false },
            { { typelib_TypeClass_LONG, the_tname1.pData, the_name2.pData }, false },
            { { typelib_TypeClass_LONG, the_tname1.pData, the_name3.pData }, false },
            { { typelib_TypeClass_LONG, the_tname1.pData, the_name4.pData }, false } };
        ::typelib_TypeDescription * the_newType = 0;
        ::typelib_typedescription_newStruct(&the_newType, the_name.pData, 0, 5, the_members);
        ::typelib_typedescription_register(&the_newType);
        ::typelib_typedescription_release(the_newType);
        return new ::com::sun::star::uno::Type(::com::sun::star::uno::TypeClass_STRUCT, the_name); // leaked
    }
};
} } } } }

namespace com { namespace sun { namespace star { namespace accessibility {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::AccessibleTableModelChange const *) {
    return *detail::theAccessibleTableModelChangeType::get();
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::AccessibleTableModelChange const *)  {
    return ::cppu::UnoType< ::com::sun::star::accessibility::AccessibleTableModelChange >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGE_HPP
