#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_TEXTSEGMENT_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_TEXTSEGMENT_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/TextSegment.hdl"

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

inline TextSegment::TextSegment() SAL_THROW(())
    : SegmentText()
    , SegmentStart(0)
    , SegmentEnd(0)
{
}

inline TextSegment::TextSegment(const ::rtl::OUString& SegmentText_, const ::sal_Int32& SegmentStart_, const ::sal_Int32& SegmentEnd_) SAL_THROW(())
    : SegmentText(SegmentText_)
    , SegmentStart(SegmentStart_)
    , SegmentEnd(SegmentEnd_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theTextSegmentType : public rtl::StaticWithInit< ::css::uno::Type *, theTextSegmentType >
{
    ::css::uno::Type * operator()() const
    {
        ::rtl::OUString the_name( "com.sun.star.accessibility.TextSegment" );
        ::rtl::OUString the_tname0( "string" );
        ::rtl::OUString the_name0( "SegmentText" );
        ::rtl::OUString the_tname1( "long" );
        ::rtl::OUString the_name1( "SegmentStart" );
        ::rtl::OUString the_name2( "SegmentEnd" );
        ::typelib_StructMember_Init the_members[] = {
            { { typelib_TypeClass_STRING, the_tname0.pData, the_name0.pData }, false },
            { { typelib_TypeClass_LONG, the_tname1.pData, the_name1.pData }, false },
            { { typelib_TypeClass_LONG, the_tname1.pData, the_name2.pData }, false } };
        ::typelib_TypeDescription * the_newType = 0;
        ::typelib_typedescription_newStruct(&the_newType, the_name.pData, 0, 3, the_members);
        ::typelib_typedescription_register(&the_newType);
        ::typelib_typedescription_release(the_newType);
        return new ::css::uno::Type(::css::uno::TypeClass_STRUCT, the_name); // leaked
    }
};
} } } } }

namespace com { namespace sun { namespace star { namespace accessibility {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::accessibility::TextSegment const *) {
    return *detail::theTextSegmentType::get();
}

} } } }

inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::accessibility::TextSegment const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::css::accessibility::TextSegment >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_TEXTSEGMENT_HPP
