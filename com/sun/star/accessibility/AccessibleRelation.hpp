#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATION_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATION_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/AccessibleRelation.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
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

inline AccessibleRelation::AccessibleRelation() 
    : RelationType(0)
    , TargetSet()
{
}

inline AccessibleRelation::AccessibleRelation(const ::sal_Int16& RelationType_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >& TargetSet_) 
    : RelationType(RelationType_)
    , TargetSet(TargetSet_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {

struct theAccessibleRelationType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theAccessibleRelationType >
{
    ::com::sun::star::uno::Type * operator()() const
    {
        ::rtl::OUString the_name( "com.sun.star.accessibility.AccessibleRelation" );
      /*
        ::rtl::OUString the_tname0( "short" );
        ::rtl::OUString the_name0( "RelationType" );

        ::cppu::UnoType< 
          ::cppu::UnoSequenceType< 
            ::com::sun::star::uno::Reference< 
              ::com::sun::star::uno::XInterface 
              > 
            > 
          >::get();

        ::rtl::OUString the_tname1( "[]com.sun.star.uno.XInterface" );
        ::rtl::OUString the_name1( "TargetSet" );
        ::typelib_StructMember_Init the_members[] = {
            { { typelib_TypeClass_SHORT, the_tname0.pData, the_name0.pData }, false },
            { { typelib_TypeClass_SEQUENCE, the_tname1.pData, the_name1.pData }, false } };
        ::typelib_TypeDescription * the_newType = 0;
        ::typelib_typedescription_newStruct(&the_newType, the_name.pData, 0, 2, the_members);
        ::typelib_typedescription_register(&the_newType);
        ::typelib_typedescription_release(the_newType);
      */
        return new ::com::sun::star::uno::Type(::com::sun::star::uno::TypeClass_STRUCT, the_name); // leaked
    }
};
} } } } }

// namespace com { namespace sun { namespace star { namespace accessibility {

// inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::AccessibleRelation const *) {
//     return *detail::theAccessibleRelationType::get();
// }

// } } } }

// inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::AccessibleRelation const *)  {
//     return ::cppu::UnoType< ::com::sun::star::accessibility::AccessibleRelation >::get();
// }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATION_HPP
